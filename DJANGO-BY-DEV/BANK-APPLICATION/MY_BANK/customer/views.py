from decimal import Decimal, DecimalException, InvalidOperation
from django.http import HttpResponse
from django.shortcuts import redirect, render,get_object_or_404
from customer.models import *
from customer.forms import *
from django.views.decorators.http import require_POST,require_GET

    
def manage_customer(request, id=None):
    if id:
        obj = get_object_or_404(CustomerData, pk=id)
    else:
        obj = None  # This indicates that we're creating a new instance
    
    if request.method == "POST":
        form = CustomerForm(request.POST, request.FILES, instance=obj)
        if form.is_valid():
            form.save()
            return redirect('create_customer')
    else:
        form = CustomerForm(instance=obj)
        data=CustomerData.objects.all()
    
    context = {'form': form,'obj': obj,'data':data,}
    return render(request, 'home.htm', context)

@require_POST  
def delete_customer(request, id):
    obj = get_object_or_404(CustomerData, pk=id)
    try:
        obj.delete()
        return redirect('create_customer')
    except Exception as e:
        return HttpResponse(f"Error: {e}", status=500)
    

# -------------------------- Deposite

def deposite_amount(request, id):
    obj = get_object_or_404(CustomerData, pk=id)
    
    if request.method == "POST":
        form = Deposite_form(request.POST, instance=obj)
        if form.is_valid():
            try:
                balance = form.cleaned_data.get('deposite_amount')
                print(balance,'--------------------------')
                if balance is not None:
                # Convert balance to Decimal
                    deposit_amount = Decimal(balance)
                    print(f"Deposit amount: {deposit_amount}")
                
                # Add the deposit amount to the current balance
                    obj.cus_balance = obj.cus_balance + deposit_amount
                    print(f"Updated balance: {obj.cus_balance}")
                
                # Save the updated balance
                    obj.save()

                # Log balance after save
                    print(f"Final balance after save: {obj.cus_balance}")
                    
                    return redirect('create_customer')
                else:
                    return HttpResponse("No balance amount provided")
            except (ValueError, InvalidOperation):
                return HttpResponse("Invalid balance amount")
        else:
            return HttpResponse("Form validation failed")
    else:
        form = Deposite_form(instance=obj)
        context = {'form': form, 'obj': obj}
        return render(request, 'deposite.htm', context)

# ---------------------------------------- Withdraw.
def withdraw_amount(request, id):
    obj = get_object_or_404(CustomerData, pk=id)
    
    if request.method == "POST":
        form = Deposite_form(request.POST,request.FILES,instance=obj)
        if form.is_valid():
            withdraw_amount = form.cleaned_data['deposite_amount']  # Assuming the form has this field
            try:
                withdraw_amount = Decimal(withdraw_amount)
                if withdraw_amount <= obj.cus_balance:
                    obj.cus_balance -= withdraw_amount  # Subtract from the existing balance
                    obj.save()  # Save the updated balance
                    return redirect('create_customer')
                else:
                    return HttpResponse("Insufficient funds")
            except (ValueError, DecimalException):
                return HttpResponse("Invalid amount")
        else:
            return HttpResponse("Form validation failed")
    else:
        form = Deposite_form(instance=obj)

        context = {'form': form, 'obj': obj}
        return render(request, 'withdraw.htm', context)




    
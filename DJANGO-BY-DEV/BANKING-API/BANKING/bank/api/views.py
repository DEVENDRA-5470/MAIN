from rest_framework.generics import *
from rest_framework import status
from rest_framework.response import Response
from django.shortcuts import get_object_or_404
from bank.models import *
from bank.api.serializers import *
from rest_framework.exceptions import *
from rest_framework.authentication import *



class All_Accounts(ListAPIView):
    queryset = Account.objects.all()
    serializer_class = Ac_seri

class Get_Account(RetrieveAPIView):
    queryset = Account.objects.all()
    serializer_class = Ac_seri
    lookup_field = 'acc_no'
    authentication_classes = [SessionAuthentication, BasicAuthentication]

class Update_Account(UpdateAPIView):
    queryset = Account.objects.all()
    serializer_class = Ac_seri
    lookup_field = 'acc_no'
    
    def get(self, request, acc_no):
        instance = get_object_or_404(Account, acc_no=acc_no)
        serializer = Ac_seri(instance)
        return Response(serializer.data)

    def patch(self, request,acc_no):
        instance = get_object_or_404(Account, acc_no=acc_no)
        serializer = Ac_seri(instance, data=request.data, partial=True)
        serializer.is_valid()
        serializer.save()
        return Response(serializer.data, status=status.HTTP_200_OK)
    

class Create_Withdraw(CreateAPIView):
    queryset = Withdraw.objects.all()
    serializer_class = Withdraw_serilizer


    def perform_create(self, serializer):
        # Access validated data
        withdrawal_data = serializer.validated_data
        
        # Get the account associated with this withdrawal
        account = withdrawal_data['account']
        
        # Check if the withdrawal amount is greater than the account's balance
        if withdrawal_data['amount'] > account.balance:
            raise ValidationError("Withdrawal amount exceeds the current balance.")
        
        # Subtract the withdrawal amount from the account's balance
        account.balance -= withdrawal_data['amount']
        
        # Save the updated account balance
        account.save()
        
        # Finally, save the withdrawal instance
        serializer.save()

    # def create(self, request, *args, **kwargs):
    #     try:
    #         return super().create(request, *args, **kwargs)
    #     except ValidationError as e:
    #         return Response({'error': str(e)})
  

class Create_Deposite(CreateAPIView):
    queryset = Deposit.objects.all()
    serializer_class = Deposite_serilizer

    def perform_create(self, serializer):
        # Save the deposit instance
        deposit = serializer.save()
        
        # Get the account associated with this deposit
        account = deposit.account
        
        # Add the deposit amount to the account's balance
        account.balance += deposit.amount
        
        # Save the updated account balance
        account.save()

    

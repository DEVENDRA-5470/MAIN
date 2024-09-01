from django import forms
from .models import CustomerData

class CustomerForm(forms.ModelForm):
    class Meta:
        model = CustomerData
        fields = ['cus_acc_no', 'cus_img', 'cus_name', 'cus_mob', 'cus_balance']
        widgets = {
            'cus_acc_no': forms.TextInput(attrs={'class': 'form-control shadow-sm bg-black-50 border border-black-300 text-black-900 text-sm rounded-lg focus:ring-blue-500 focus:border-blue-500 block w-full p-2.5 dark:bg-black-700 dark:border-black-600 dark:placeholder-black-400 dark:text-black dark:focus:ring-blue-500 dark:focus:border-blue-500 dark:shadow-sm-light', 'placeholder': 'Account Number (Auto)'}),
            'cus_img': forms.ClearableFileInput(attrs={'class': 'form-control shadow-sm bg-black-50 border border-black-300 text-black-900 text-sm rounded-lg focus:ring-blue-500 focus:border-blue-500 block w-full p-2.5 dark:bg-black-700 dark:border-black-600 dark:placeholder-black-400 dark:text-black dark:focus:ring-blue-500 dark:focus:border-blue-500 dark:shadow-sm-light'}),
            'cus_name': forms.TextInput(attrs={'class': 'form-control shadow-sm bg-black-50 border border-black-300 text-black-900 text-sm rounded-lg focus:ring-blue-500 focus:border-blue-500 block w-full p-2.5 dark:bg-black-700 dark:border-black-600 dark:placeholder-black-400 dark:text-black dark:focus:ring-blue-500 dark:focus:border-blue-500 dark:shadow-sm-light', 'placeholder': 'Customer Name'}),
            'cus_mob': forms.TextInput(attrs={'class': 'form-control shadow-sm bg-black-50 border border-black-300 text-black-900 text-sm rounded-lg focus:ring-blue-500 focus:border-blue-500 block w-full p-2.5 dark:bg-black-700 dark:border-black-600 dark:placeholder-black-400 dark:text-black dark:focus:ring-blue-500 dark:focus:border-blue-500 dark:shadow-sm-light', 'placeholder': 'Mobile No.'}),
            'cus_balance': forms.NumberInput(attrs={'class': 'form-control shadow-sm bg-black-50 border border-black-300 text-black-900 text-sm rounded-lg focus:ring-blue-500 focus:border-blue-500 block w-full p-2.5 dark:bg-black-700 dark:border-black-600 dark:placeholder-black-400 dark:text-black dark:focus:ring-blue-500 dark:focus:border-blue-500 dark:shadow-sm-light', 'placeholder': 'Balance'}),
        }
        
class Deposite_form(forms.ModelForm):
    deposite_amount = forms.DecimalField(max_digits=10, decimal_places=2,
    widget=forms.NumberInput(
        attrs={'class': 'form-control shadow-sm bg-black-50 border border-black-300 text-black-900 text-sm rounded-lg focus:ring-blue-500 focus:border-blue-500 block w-full p-2.5 dark:bg-black-700 dark:border-black-600 dark:placeholder-black-400 dark:text-black dark:focus:ring-blue-500 dark:focus:border-blue-500 dark:shadow-sm-light', 'placeholder': 'Balance'}
    )
                                         
    )  # New field for deposit amount
    
    class Meta:
        model=CustomerData
        fields=['cus_acc_no','deposite_amount']
        widgets = {
            'cus_acc_no': forms.TextInput(attrs={'class': 'form-control shadow-sm bg-black-50 border border-black-300 text-black-900 text-sm rounded-lg focus:ring-blue-500 focus:border-blue-500 block w-full p-2.5 dark:bg-black-700 dark:border-black-600 dark:placeholder-black-400 dark:text-black dark:focus:ring-blue-500 dark:focus:border-blue-500 dark:shadow-sm-light', 'placeholder': 'Account Number*'}),
        }
   

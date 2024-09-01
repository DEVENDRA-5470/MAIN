import random
import string
from django.db import models

def generate_random_string(length=6):
    characters = string.ascii_lowercase + string.digits
    return ''.join(random.choices(characters, k=length)).upper()

class Account(models.Model):
    acc_no = models.CharField(max_length=10, default=generate_random_string, unique=True)
    cus_img = models.ImageField(upload_to='uploads/',blank=True, null=True)
    cus_name = models.CharField(max_length=100)
    cus_address = models.CharField(max_length=255)
    cus_adhar = models.CharField(max_length=12)
    cus_age = models.IntegerField()
    cus_gender = models.CharField(max_length=10)
    cus_mobile = models.CharField(max_length=15)
    created_at = models.DateTimeField(auto_now_add=True)
    updated_at = models.DateTimeField(auto_now=True)
    balance = models.DecimalField(max_digits=10, decimal_places=2, default=0.00)
    
    def __str__(self):
        return self.cus_name
    


class TransIdMixin:
    @staticmethod
    def trans_id():
        return ''.join(random.choices(string.ascii_uppercase + string.digits, k=16))

class Deposit(models.Model,TransIdMixin):
    account = models.ForeignKey(Account, related_name='deposits', on_delete=models.CASCADE)
    amount = models.DecimalField(max_digits=10, decimal_places=2)
    created_at = models.DateTimeField(auto_now_add=True)

    
    transaction_id = models.CharField(max_length=100, unique=True, default=TransIdMixin.trans_id())

    def __str__(self):
        return f"Deposit {self.transaction_id} - Amount: {self.amount}"

    @property
    def acc_no_list(self):
        return self.account.deposits.values_list('account__acc_no', flat=True).distinct()


    def __str__(self):
        return f"Deposit {self.transaction_id} - Amount: {self.amount} - Customer Account Numbers: {', '.join(self.acc_no_list)}"




class Withdraw(models.Model,TransIdMixin):
    account = models.ForeignKey(Account, related_name='withdraws', on_delete=models.CASCADE)
    amount = models.DecimalField(max_digits=10, decimal_places=2)
    created_at = models.DateTimeField(auto_now_add=True)
    
    

    transaction_id = models.CharField(max_length=100, unique=True, default=TransIdMixin.trans_id())

    @property
    def acc_no_list(self):
        return self.account.deposits.values_list('account__acc_no', flat=True).distinct()

    def __str__(self):
        return f"Withdraw {self.transaction_id} - Amount: {self.amount}"
    

  
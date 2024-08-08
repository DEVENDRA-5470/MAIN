from django.db import models
import random
import string
# Create your models here.


class Accounts(models.Model):
    def rand_ac(length=10):
        data=''.join(random.choices(string.digits,k=length))
        return data
    cus_acc_no=models.CharField(max_length=10,default=rand_ac)
    cus_name=models.CharField(max_length=20)
    cus_mob=models.BigIntegerField(unique=True)
    cus_adhar=models.CharField(max_length=12,unique=True)
    cus_img=models.ImageField(upload_to='uploads/',blank=True,null=True)
    cus_balance=models.DecimalField(max_digits=10,decimal_places=2,default=0.0)
    created_at=models.DateTimeField(auto_now_add=True)
    update_at=models.DateTimeField(auto_now=True)


    def __str__(self):
        return self.cus_name

class Withdraw(models.Model):
    def trans(length=16):
        data=''.join(random.choices(string.ascii_uppercase+string.digits,k=length))
        return data
    account=models.ForeignKey(Accounts,related_name='withdraws',on_delete=models.CASCADE)
    amount=models.DecimalField(max_digits=10,decimal_places=2,default=0.0)
    trans_id=models.CharField(max_length=16,default=trans)
    created_at=models.DateTimeField(auto_now_add=True)

class Deposit(models.Model):
    def trans(length=16):
        data=''.join(random.choices(string.ascii_uppercase+string.digits,k=length))
        return data
    account=models.ForeignKey(Accounts,related_name='deposits',on_delete=models.CASCADE)
    amount=models.DecimalField(max_digits=10,decimal_places=2,default=0.0)
    trans_id=models.CharField(max_length=16,default=trans)
    created_at=models.DateTimeField(auto_now_add=True)

    @property
    def cus_acc_no(self):
        return self.account.deposits.values_list('account__cus_acc_no', flat=True).distinct()
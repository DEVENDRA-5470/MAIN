from rest_framework import serializers
from bankapp.models import *

class Accounts_ser(serializers.ModelSerializer):
    class Meta:
        model=Accounts
        fields="__all__"

class Deposite_ser(serializers.ModelSerializer):
    class Meta:
        model=Deposit
        fields="__all__"

class Withdraw_ser(serializers.ModelSerializer):
    class Meta:
        model=Withdraw
        fields="__all__"
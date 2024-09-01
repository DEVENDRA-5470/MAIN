from rest_framework import serializers
from bank.models import *

class Ac_seri(serializers.ModelSerializer):
    class Meta:
        model=Account
        fields='__all__'


class Withdraw_serilizer(serializers.ModelSerializer):
    class Meta:
        model=Withdraw
        fields='__all__'

    


class Deposite_serilizer(serializers.ModelSerializer):
    class Meta:
        model=Deposit
        fields='__all__'

    
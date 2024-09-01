from rest_framework import serializers
from bank.models import *

class Ac_seri(serializers.ModelSerializer):
    class Meta:
        model=Account
        fields='__all__'
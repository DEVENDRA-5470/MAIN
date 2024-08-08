from rest_framework.response import Response
from bankapp.api.serializers import *
from bankapp.models import *
from rest_framework.decorators import api_view
from django.shortcuts import *
from rest_framework.generics import *
from rest_framework.authentication import SessionAuthentication, BasicAuthentication
from rest_framework.permissions import IsAuthenticated

# @api_view(['GET'])
# def all_accounts(request):
#     accounts=Accounts.objects.all()
#     ser=Accounts_ser(accounts,many=True)
#     print(ser.data,"----------------------")
#     return Response(ser.data,status=200)

# @api_view(['GET'])
# def get_ac(request,ac_no):

#     account=get_object_or_404(Accounts,cus_acc_no=ac_no)
#     ser=Accounts_ser(account)
#     return Response(ser.data)

class all_accounts(ListAPIView):
    queryset=Accounts.objects.all()
    serializer_class=Accounts_ser

class get_account(RetrieveAPIView):
    queryset=Accounts.objects.all()
    serializer_class=Accounts_ser
    lookup_field="cus_acc_no"

class update_account(UpdateAPIView):
    queryset=Accounts.objects.all()
    serializer_class=Accounts_ser
    lookup_field="cus_acc_no"

    def get(self,request,cus_acc_no):
        instance=get_object_or_404(Accounts,cus_acc_no=cus_acc_no)
        serializer=Accounts_ser(instance)
        return Response(serializer.data)
    
    def patch(self,request,cus_acc_no):
        instance=get_object_or_404(Accounts,cus_acc_no=cus_acc_no)
        serializer=Accounts_ser(instance,data=request.data,partial=True)
        serializer.is_valid()
        serializer.save()
        return Response(serializer.data)


class create_deposite(CreateAPIView):
    queryset=Deposit.objects.all()
    serializer_class=Deposite_ser
    # authentication_classes = [SessionAuthentication, BasicAuthentication]
    permission_classes = [IsAuthenticated]


    def perform_create(self,serializer):
        deposite=serializer.save()
        account=deposite.account
        account.cus_balance += deposite.amount
        account.save()


class create_withdraw(CreateAPIView):
    queryset=Withdraw.objects.all()
    serializer_class=Withdraw_ser
    # authentication_classes = [SessionAuthentication, BasicAuthentication]
    permission_classes = [IsAuthenticated]

    def perform_create(self,serializer):
        withdraw=serializer.save()
        ac=withdraw.account
        am=withdraw.amount
        ac.cus_balance-=am
        ac.save()
        
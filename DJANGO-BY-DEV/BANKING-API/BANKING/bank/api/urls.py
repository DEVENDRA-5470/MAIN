from django.urls import path
from bank.api.views import *

urlpatterns = [
    path('list/', All_Accounts.as_view(), name="all_accounts"),
    path('getac/<str:acc_no>/', Get_Account.as_view(), name="get_account"),
    path('updateac/<str:acc_no>/', Update_Account.as_view(), name="update_account"),
    path('create_with/', Create_Withdraw.as_view(), name="Create_Withdraw"),
    path('create_depo/', Create_Deposite.as_view(), name="Create_Deposite"),

]

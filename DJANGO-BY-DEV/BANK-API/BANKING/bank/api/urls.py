from django.urls import path
from bank.api.views import *

urlpatterns = [
    path('list/',all_accounts,name="all_accounts"),
    path('getac/<str:acno>/',get_account,name="get_account"),
    path('updateac/<str:acno>/',update_account,name="update_account")
]

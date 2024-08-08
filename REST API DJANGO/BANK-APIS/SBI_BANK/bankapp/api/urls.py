from bankapp.api.views import *
from django.urls import path

urlpatterns = [
    path('list/',all_accounts.as_view(),name=""),
    path('get_ac/<str:cus_acc_no>/',get_account.as_view(),name=""),
    path('upd_ac/<str:cus_acc_no>/',update_account.as_view(),name=""),
    path('cd/',create_deposite.as_view(),name=""),
    path('wd/',create_withdraw.as_view(),name=""),
]

from django.urls import path
from customer.views import *
urlpatterns = [
    path('delete_customer/<int:id>/',delete_customer,name="delete_customer"),
    path('', manage_customer, name='create_customer'),
    path('customer/<int:id>/', manage_customer, name='edit_customer'),
    path('deposite_amount/<int:id>/', deposite_amount, name='deposite_amount'),
    path('withdraw_amount/<int:id>/', withdraw_amount, name='withdraw_amount'),
]

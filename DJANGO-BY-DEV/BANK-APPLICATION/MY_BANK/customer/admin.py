from django.contrib import admin
from .models import *
@admin.register(CustomerData)
# Register your models here.
class Customer_admin(admin.ModelAdmin):
    pass
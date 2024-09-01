from django.contrib import admin
from products.models import *
# Register your models here.
@admin.register(Products)
class ProductsAdmin(admin.ModelAdmin):
    pass
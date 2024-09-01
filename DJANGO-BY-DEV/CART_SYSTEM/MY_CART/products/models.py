# models.py
from django.db import models
from django_use_email_as_username.models import BaseUser
from custom_user.models import User 

class Products(models.Model):
    user = models.ForeignKey(User, on_delete=models.CASCADE)  
    product_image = models.ImageField(upload_to="uploads/")
    product_name = models.CharField(max_length=100)
    product_price = models.BigIntegerField(default=0)
    product_desc = models.TextField()

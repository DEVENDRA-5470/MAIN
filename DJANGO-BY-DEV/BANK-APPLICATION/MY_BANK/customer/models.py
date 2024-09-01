import random
import string
from django.db import models

def generate_account_number():
    return ''.join(random.choices(string.digits, k=10))  # Generates a 10-digit account number

class CustomerData(models.Model):
    cus_acc_no = models.CharField(max_length=20, unique=True, blank=True )  # Removed default
    cus_img = models.ImageField(upload_to='customer_images/', null=True, blank=True)
    cus_name = models.CharField(max_length=100)
    cus_mob = models.CharField(max_length=15)
    cus_balance = models.DecimalField(max_digits=10, decimal_places=2)
    cus_created_at = models.DateTimeField(auto_now_add=True)
    cus_updated_at = models.DateTimeField(auto_now=True)

    def save(self, *args, **kwargs):
        if not self.cus_acc_no:  # Check if account number is not set
            self.cus_acc_no = generate_account_number()
        super().save(*args, **kwargs)  # Call the original save method

    def __str__(self):
        return self.cus_name

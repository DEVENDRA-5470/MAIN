from django.contrib import admin
from bankapp.models import *
# Register your models here.
class Accounts_admin(admin.ModelAdmin):
    list_display=[fields.name for fields in Accounts._meta.fields]

class Withdraw_admin(admin.ModelAdmin):
    list_display=[fields.name for fields  in Withdraw._meta.fields]

class Deposit_admin(admin.ModelAdmin):
    list_display=['account','amount','trans_id','created_at','get_cus_acc_no']
    def get_cus_acc_no(self,obj):
        return ",".join(obj.cus_acc_no)
    get_cus_acc_no.short_description="CUSTOMER ACCOUNT NUMBER"

admin.site.register(Accounts,Accounts_admin)
admin.site.register(Withdraw,Withdraw_admin)
admin.site.register(Deposit,Deposit_admin)


from django.contrib import admin
from bank.models import *
# Register your models here.
class ac_Admin(admin.ModelAdmin):
    list_display=[i.name for i in Account._meta.fields]
  

class depo_Admin(admin.ModelAdmin):
    list_display = ('transaction_id', 'amount', 'created_at', 'get_acc_no_list','account')

    def get_acc_no_list(self, obj):
        return ", ".join(obj.acc_no_list)
    get_acc_no_list.short_description = 'Customer Account Numbers'


class with_Admin(admin.ModelAdmin):
    list_display = ('transaction_id', 'amount', 'created_at', 'get_cus_acc_no_list','account')

    def get_cus_acc_no_list(self, obj):
        return ", ".join(obj.acc_no_list)
    get_cus_acc_no_list.short_description = 'Customer Account Numbers'

admin.site.register(Account,ac_Admin)
admin.site.register(Deposit,depo_Admin)
admin.site.register(Withdraw,with_Admin)
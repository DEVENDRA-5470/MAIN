# Generated by Django 5.0.6 on 2024-08-19 05:42

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('customer', '0001_initial'),
    ]

    operations = [
        migrations.AlterField(
            model_name='customerdata',
            name='cus_acc_no',
            field=models.CharField(default='2894184035', max_length=20, unique=True),
        ),
    ]

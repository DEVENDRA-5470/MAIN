# Generated by Django 4.2.13 on 2024-05-29 18:58

import bank.models
from django.db import migrations, models
import django.db.models.deletion


class Migration(migrations.Migration):

    initial = True

    dependencies = [
    ]

    operations = [
        migrations.CreateModel(
            name='Account',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('acc_no', models.CharField(default=bank.models.generate_random_string, max_length=10, unique=True)),
                ('cus_img', models.ImageField(upload_to='uploads/')),
                ('cus_name', models.CharField(max_length=100)),
                ('cus_address', models.CharField(max_length=255)),
                ('cus_adhar', models.CharField(max_length=12)),
                ('cus_age', models.IntegerField()),
                ('cus_gender', models.CharField(max_length=10)),
                ('cus_mobile', models.CharField(max_length=15)),
                ('created_at', models.DateTimeField(auto_now_add=True)),
                ('updated_at', models.DateTimeField(auto_now=True)),
                ('balance', models.DecimalField(decimal_places=2, default=0.0, max_digits=10)),
            ],
        ),
        migrations.CreateModel(
            name='Withdraw',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('amount', models.DecimalField(decimal_places=2, max_digits=10)),
                ('created_at', models.DateTimeField(auto_now_add=True)),
                ('transaction_id', models.CharField(default=bank.models.Withdraw.trans_id, max_length=100, unique=True)),
                ('account', models.ForeignKey(on_delete=django.db.models.deletion.CASCADE, related_name='withdraws', to='bank.account')),
            ],
        ),
        migrations.CreateModel(
            name='Deposit',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('amount', models.DecimalField(decimal_places=2, max_digits=10)),
                ('created_at', models.DateTimeField(auto_now_add=True)),
                ('transaction_id', models.CharField(default=bank.models.generate_random_string, max_length=100, unique=True)),
                ('account', models.ForeignKey(on_delete=django.db.models.deletion.CASCADE, related_name='deposits', to='bank.account')),
            ],
        ),
    ]

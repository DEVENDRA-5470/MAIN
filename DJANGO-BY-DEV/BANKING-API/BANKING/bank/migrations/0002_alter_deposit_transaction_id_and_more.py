# Generated by Django 4.2.13 on 2024-05-30 07:46

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('bank', '0001_initial'),
    ]

    operations = [
        migrations.AlterField(
            model_name='deposit',
            name='transaction_id',
            field=models.CharField(default='WXZN0WMTNLTKDGIB', max_length=100, unique=True),
        ),
        migrations.AlterField(
            model_name='withdraw',
            name='transaction_id',
            field=models.CharField(default='255ZGGT5A8YZEAM5', max_length=100, unique=True),
        ),
    ]

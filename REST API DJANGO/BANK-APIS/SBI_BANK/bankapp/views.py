from django.shortcuts import *
import requests
# Create your views here.
def all_ac(request):
    data=requests.get('http://127.0.0.1:8000/api/cd/')
    return HttpResponse(data)
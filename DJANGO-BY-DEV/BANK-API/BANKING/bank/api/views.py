from bank.models import *
from bank.api.serializers import *
from rest_framework.decorators import api_view
from rest_framework import status
from rest_framework.response import Response
from django.shortcuts import get_object_or_404
@api_view(['GET'])
def all_accounts(request):
    try:
        accounts = Account.objects.all()
        serializer = Ac_seri(accounts, many=True)
        return Response(serializer.data, status=status.HTTP_200_OK)
    except Exception as e:
        return Response({'error': str(e)}, status=status.HTTP_500_INTERNAL_SERVER_ERROR)
    
@api_view(['GET'])  
def get_account(request, acno):
    try:
        # Fetch the account object by account number
        account = get_object_or_404(Account, acc_no=acno)
        serializer = Ac_seri(account)
        return Response(serializer.data, status=status.HTTP_200_OK)
    except Exception as e:
        return Response({'error': str(e)}, status=status.HTTP_500_INTERNAL_SERVER_ERROR)
    

@api_view(['PATCH'])
def update_account(request, acno):
    # Fetch the account object by account number
    account = get_object_or_404(Account, acc_no=acno)
    
    # Deserialize the request data to update the account object
    serializer = Ac_seri(account, data=request.data, partial=True)
    
    # Check if the provided data is valid
    if serializer.is_valid():
        # Save the updated account object
        serializer.save()
        
        # Return the serialized data of the updated object
        return Response(serializer.data, status=status.HTTP_200_OK)
    else:
        # Return the serializer errors if validation fails
        return Response(serializer.errors, status=status.HTTP_400_BAD_REQUEST)

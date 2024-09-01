from django.contrib.auth.backends import ModelBackend
from django.contrib.auth.models import User

class EmailAuthBackend(ModelBackend):
    """
    Custom authentication backend to allow 
    users to log in using their email instead of username.
    """
    def authenticate(self, request, username=None, password=None, **kwargs):
        # Try to find a user matching the provided email
        try:
            user = User.objects.get(email=username)  
            # Using 'username' as email here
            print(user.email)
        except User.DoesNotExist:
            return None

        # Check if the password matches
        if user.check_password(password):
            return user
        return None

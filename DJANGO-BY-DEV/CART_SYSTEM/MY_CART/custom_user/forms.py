from django import forms
from .models import User
from django.core.exceptions import ValidationError
class UserForm(forms.ModelForm):
    class Meta:
        model = User
        fields = ['email', 'first_name', 'last_name', 'password']  # Include fields you want in the form
        widgets = {
            'password': forms.PasswordInput(),  # To display password input field as dots
        }


class LoginForm(forms.Form):
    email = forms.EmailField(label="Email", max_length=254)
    password = forms.CharField(label="Password", widget=forms.PasswordInput())

    def clean_email(self):
        email = self.cleaned_data.get('email')
        
        return email

    def clean_password(self):
        password = self.cleaned_data.get('password')
        if len(password) < 5:
            raise ValidationError("Password must be at least 10 characters long.")
        return password


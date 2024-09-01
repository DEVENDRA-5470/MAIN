from django.shortcuts import render, redirect
from .forms import UserForm,LoginForm
from django.contrib.auth import authenticate,login
from django.contrib import messages

def register(request):
    if request.method == 'POST':
        form = UserForm(request.POST)
        if form.is_valid():
            user = form.save(commit=False)
            user.set_password(form.cleaned_data['password'])  # Hash the password before saving
            user.save()
            return redirect('login')
    else:
        form = UserForm()
    return render(request, 'register.html', {'form': form})




def login_view(request):
    if request.method == 'POST':
        form = LoginForm(request.POST)
        if form.is_valid():
            email = form.cleaned_data.get('email')
            password = form.cleaned_data.get('password')
            user = authenticate(request, email=email, password=password)
            if user is not None:
                login(request, user)
                messages.success(request, "You have successfully logged in.")
                return redirect('/')  # Redirect to the home page or another page of your choice.
            else:
                form.add_error(None, "Invalid email or password.")
    else:
        form = LoginForm()

    return render(request, 'login.html', {'form': form})
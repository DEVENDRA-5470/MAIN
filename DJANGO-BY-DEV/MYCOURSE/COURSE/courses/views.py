from django.shortcuts import *
from django.contrib.auth.models import User
from django.contrib.auth import authenticate, login
from django.shortcuts import render, redirect
from django.contrib.auth.models import User
from django.contrib import messages
from courses.models import *
import random
# ------------------------------- Home
def home(request):
    if request.method == "POST":
        username = request.POST.get('username')
        first_name = request.POST.get('first-name')
        last_name = request.POST.get('last-name')
        email = request.POST.get('email')
        password = request.POST.get('password')

        # Check if the username or email already exists
        if User.objects.filter(username=username).exists():
            messages.error(request, "Username already exists")
        elif User.objects.filter(email=email).exists():
            messages.error(request, "Email already exists")
        else:
            # Create the user
            user = User.objects.create_user(
                username=username,
                first_name=first_name,
                last_name=last_name,
                email=email,
                password=password
            )
            user.save()

            # Authenticate the user
            user = authenticate(username=username, password=password)
            if user is not None:
                # Log the user in
                login(request, user)
                return redirect('all_courses')  # Redirect to the home page after login
            else:
                messages.error(request, "Authentication failed")

    return render(request, 'home.html')

# ----------------------------- Login
def login_page(request):
    if request.method == "POST":
        email = request.POST.get('email')
        password = request.POST.get('password')

        # Authenticate using email
        user = authenticate(username=email, password=password)  # username here refers to email
        if user is not None:
            login(request, user)
            return redirect('all_courses')
        else:
            messages.error(request, "Invalid email or password")

    return render(request, 'login.html')

# --------------------------------
def all_courses(request):
    data=Course.objects.all()
    context={'data':data}
    return render(request ,'all_courses.html',context)


# ---------------------------- Detail page

def detail_page(request,course_id):
    course=Course.objects.get(id=course_id)
    all_courses = list(Course.objects.all().exclude(id=course_id))  # Exclude the current course
    highlights = course.highlights.split('\n') if course.highlights else []
    random_courses = random.sample(all_courses, min(len(all_courses), 4))
    context={'course':course,'highlights':highlights, 'random_courses': random_courses}
    return render(request ,'detail.html',context)
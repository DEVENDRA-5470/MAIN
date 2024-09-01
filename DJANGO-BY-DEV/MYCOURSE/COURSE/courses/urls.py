from django.urls import path
from courses.views import *
urlpatterns = [
    path(r'',home,name="home"),
    path(r'all_courses/',all_courses,name="all_courses"),
    path(r'login_page/',login_page,name="login_page"),
    path(r'detail_page/<int:course_id>/',detail_page,name="detail_page"),
]

from django.contrib import admin
from .models import Course

@admin.register(Course)
class CourseAdmin(admin.ModelAdmin):
    list_display = ('title', 'image','category', 'price', 'duration', 'created_at', 'updated_at')
    search_fields = ('title', 'category')

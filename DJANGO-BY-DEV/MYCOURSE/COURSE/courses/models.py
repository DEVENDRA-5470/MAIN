from django.db import models
from tinymce.models import HTMLField

class Course(models.Model):
    title = models.CharField(max_length=200)
    description = HTMLField()  # Use RichTextField for rich text
    category = models.CharField(max_length=100)
    price = models.DecimalField(max_digits=10, decimal_places=2)
    image = models.URLField()  # or models.ImageField(upload_to='course_images/')
    highlights = models.TextField(blank=True, null=True)  # Optional field for course highlights
    duration = models.CharField(max_length=50)
    created_at = models.DateTimeField(auto_now_add=True)
    updated_at = models.DateTimeField(auto_now=True)

    def __str__(self):
        return self.title

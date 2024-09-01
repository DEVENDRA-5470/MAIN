from django.core.management.base import BaseCommand
from faker import Faker
from courses.models import Course  # Replace with your app and model name
from decimal import Decimal
import random

class Command(BaseCommand):
    help = 'Populates the Course table with fake data'

    def handle(self, *args, **kwargs):
        fake = Faker()

        categories = ['Technology', 'Programming', 'Web Development', 'Cybersecurity', 'Cloud Computing']
        durations = ['180 Hours', '2 Months', '280 Hours', '13 months', '6 months']  # Example durations
        # List of IT course titles
        it_course_titles = [
            'Introduction to Python Programming',
            'Mastering Web Development with Django',
            'Data Structures and Algorithms in C',
            'Advanced JavaScript Techniques',
            'Full-Stack Development with React and Node.js',
            'Cybersecurity Fundamentals',
            'DevOps Essentials: Docker and Kubernetes',
            'Cloud Computing with AWS',
            'Machine Learning with Python',
            'Mobile App Development with Flutter'
        ]

        # List of provided image URLs
        image_urls = [
            "https://img.freepik.com/premium-photo/colorful-illustration-colorful-business-card-with-graphic-man-working-with-computer_1308157-228378.jpg?w=740",
            "https://img.freepik.com/premium-photo/it-engineer-working-with-his-pc_1293807-141.jpg?w=740",
            "https://img.freepik.com/free-vector/isometric-data-visualization-concept_23-2148079891.jpg?ga=GA1.1.1188838399.1724669593&semt=ais_hybrid",
            "https://img.freepik.com/premium-photo/bioinformatician-presenting-research-findings_997534-55462.jpg?ga=GA1.1.1188838399.1724669593&semt=ais_hybrid",
            "https://img.freepik.com/premium-photo/chemist-visualizing-photochemical-reaction-pathways-intermediates_1314467-78780.jpg?ga=GA1.1.1188838399.1724669593&semt=ais_hybrid"
        ]

        for _ in range(10):  # Adjust the number of records as needed
            title = random.choice(it_course_titles)  # Generate a random course title
            description = fake.paragraph(nb_sentences=15)  # Generate random rich text for the description
            category = random.choice(categories)  # Randomly pick a category
            price = Decimal(fake.random_number(digits=4)) / 100  # Generate random price, with two decimal places
            image = random.choice(image_urls)  # Randomly pick one of the provided image URLs
            highlights = "\n".join(fake.sentences(nb=3))  # Generate random highlights
            duration = random.choice(durations)  # Randomly pick a duration

            # Create the Course object
            Course.objects.create(
                title=title,
                description=description,
                category=category,
                price=price,
                image=image,
                highlights=highlights,
                duration=duration
            )

        self.stdout.write(self.style.SUCCESS('Successfully populated the Course table with fake data'))

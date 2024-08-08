import smtplib
from tkinter import *
from email.mime.multipart import MIMEMultipart
from email.mime.text import MIMEText
import keyring

# Service name for keyring
SERVICE_NAME = "EmailSenderApp"

# Default password (for testing purposes only)
DEFAULT_PASSWORD = "dzfw koxm bkxj sdct"

# Function to save credentials
def save_credentials(email, password):
    keyring.set_password(SERVICE_NAME, email, password)

# Function to get saved password
def get_saved_password(email):
    return keyring.get_password(SERVICE_NAME, email)

# Function to send email
def send_email():
    sender_email = sender_entry.get()
    receiver_email = receiver_entry.get()
    password = password_entry.get() or get_saved_password(sender_email) or DEFAULT_PASSWORD
    
    if not password:
        status_label.config(text="Password is required and not saved.", fg="red")
        return
    
    # Set up the MIME
    msg = MIMEMultipart()
    msg['From'] = sender_email
    msg['To'] = receiver_email
    msg['Subject'] = subject_entry.get()
    msg.attach(MIMEText(body_entry.get("1.0", END), 'plain'))

    try:
        server = smtplib.SMTP('smtp.gmail.com', 587)
        server.starttls()
        server.login(sender_email, password)
        text = msg.as_string()
        server.sendmail(sender_email, receiver_email, text)
        status_label.config(text="Email sent successfully", fg="green")
        save_credentials(sender_email, password)  # Save the password after successful login
        server.quit()
    except smtplib.SMTPAuthenticationError as e:
        error_code = e.smtp_code
        error_message = e.smtp_error
        print(f"SMTP Authentication Error: {error_code} - {error_message}")
        status_label.config(text="Username and password not matching. Check App Password or less secure app access settings.", fg="red")
    except Exception as e:
        print(f"General Error: {str(e)}")
        status_label.config(text=f"Error: {str(e)}", fg="red")

# Function to auto-fill email and password if saved
def autofill_credentials():
    sender_email = sender_entry.get()
    password = get_saved_password(sender_email)
    if password:
        password_entry.insert(0, password)
    else:
        password_entry.insert(0, DEFAULT_PASSWORD)

# Setting up the GUI
root = Tk()
root.title("Email Sender")

Label(root, text="Sender Email:").grid(row=0, column=0, padx=10, pady=5)
Label(root, text="Password:").grid(row=1, column=0, padx=10, pady=5)
Label(root, text="Receiver Email:").grid(row=2, column=0, padx=10, pady=5)
Label(root, text="Subject:").grid(row=3, column=0, padx=10, pady=5)
Label(root, text="Body:").grid(row=4, column=0, padx=10, pady=5)

sender_entry = Entry(root, width=30)
password_entry = Entry(root, show="*", width=30)
receiver_entry = Entry(root, width=30)
subject_entry = Entry(root, width=30)
body_entry = Text(root, height=10, width=30)

sender_entry.grid(row=0, column=1, padx=10, pady=5)
password_entry.grid(row=1, column=1, padx=10, pady=5)
receiver_entry.grid(row=2, column=1, padx=10, pady=5)
subject_entry.grid(row=3, column=1, padx=10, pady=5)
body_entry.grid(row=4, column=1, padx=10, pady=5)

send_button = Button(root, text="Send Email", command=send_email)
send_button.grid(row=5, column=0, columnspan=2, pady=10)

status_label = Label(root, text="")
status_label.grid(row=6, column=0, columnspan=2)

# Autofill credentials if available
sender_entry.bind("<FocusOut>", lambda e: autofill_credentials())

root.mainloop()

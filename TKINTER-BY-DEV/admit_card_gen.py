import tkinter as tk
from tkinter import ttk
# Creating a window
window=tk.Tk()
window.geometry('600x600')
window.resizable(0,0)
# window.iconbitmap(default="myicon.ico")
label=tk.Label(window)
label.config(text="ADMIT CARD")
# label.pack(side=tk.RIGHT ,expand=True)
label.pack()

# keep window displaying
window.mainloop()
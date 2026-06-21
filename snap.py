import random
import time
from tkinter import Tk, Canvas, HIDDEN, NORMAL

def next_shape():
    global shape
    global previous_color
    global current_color

    previous_color = current_color

    
    C.delete(shape)
    if len(shapes) > 0:
        c.itemconfigure(shape. state= NORMAL)
        current_color = c.itemcget()
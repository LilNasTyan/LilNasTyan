# -*- coding: utf-8 -*-
"""Untitled5.ipynb

Automatically generated by Colaboratory.

Original file is located at
    https://colab.research.google.com/drive/1bmhtubjz2HKP2tK0AfB6zm_F4fHHbCUk
"""

import math
a=float(input("Основание равнобедренной трапеции a:"))
b=float(input("Основание равнобедренной трапеции b:"))
h=float(input("Высота равнобедренной трапеции h:"))
c=math.sqrt((b-a)**2/4 + h**2) #боковая сторона трапеции
p=a+b+2*c
print("Периметр равен = %.4f" %p)
# -*- coding: utf-8 -*-
"""Untitled3.ipynb

Automatically generated by Colaboratory.

Original file is located at
    https://colab.research.google.com/drive/1n6uz_hnwdNZcd1tlAJnOVa_o0AtYl1Pi
"""

import math
x = float(input("Введите значение x: "))
if x > 0:
    y = 1 / (math.cos(x)**2)
else:
    y = 1 - 2 * math.tan(x**2)
print("y(%.2f) ="%x, "%.4f" %y)


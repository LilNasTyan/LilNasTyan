# -*- coding: utf-8 -*-
"""Untitled5.ipynb

Automatically generated by Colaboratory.

Original file is located at
    https://colab.research.google.com/drive/1bmhtubjz2HKP2tK0AfB6zm_F4fHHbCUk
"""

import math
a=float(input("Основание трапеции a = "))
b=float(input("Основание трапеции b = "))
alpha=float(input("Угол при большем основании в градусах alpha = "))
s=(a+b)*abs(a-b)*math.tan(math.radians(alpha))/4
print("Площадь трапеции S = %.4f" %s)
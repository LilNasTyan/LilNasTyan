# -*- coding: utf-8 -*-
"""Untitled3.ipynb

Automatically generated by Colaboratory.

Original file is located at
    https://colab.research.google.com/drive/1n6uz_hnwdNZcd1tlAJnOVa_o0AtYl1Pi
"""

import math
def f(x):
  y = 2*math.sin(x**2) - 1
  return y
def sign(y):
  if y<0:
    return -1
  elif y>0:
    return 1
  else:
    return 0
flag=1
while flag==1:
  a = float(input("Введите a: "))
  b = float(input("Введите b: "))
  if sign(f(a)) == sign(f(b)):
    print("Ошибка в данных, выберите другой отрезок!")
  else:
    flag=0
epsilon = float(input("Введите точность: "))
print(f'Корень уравнения f(x)=0 на отрезке [{a},{b}]:', end=' ')
error = 1
while error > epsilon:
  x = (a+b)/2
  error = abs(f(x))
  if sign(f(a)) != sign(f(x)):
    b = x
  else:
    a = x
print("%.5f" %x)


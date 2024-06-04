# -*- coding: utf-8 -*-
"""Untitled3.ipynb

Automatically generated by Colaboratory.

Original file is located at
    https://colab.research.google.com/drive/1n6uz_hnwdNZcd1tlAJnOVa_o0AtYl1Pi
"""

import random

def print_vec(vec, format_str): # vec - массив, format_str - формат вывода
  print("[", end='')
  for i in range(len(vec)-1):
    if i%10!=9:
      print(format_str.format(vec[i]),end=', ')
    else:
      print(format_str.format(vec[i]),",\n",end='',sep='')
  print(format_str.format(vec[len(vec)-1]),"]",sep='')

n=int(input("Введите длину векторов: "))
left = random.randint(-5,5)
right = left+random.randint(0,10)
a=[]
for i in range(n):
  #добавляем в массив случайное число от a до b
  a.append(random.randint(left,right))
left = random.randint(-10,10)
right = left+random.randint(0,10)
b=[]
for i in range(n):
  #добавляем в массив случайное число от a до b
  b.append(random.randint(left,right))
#а
c = a[:]
for i in range(n):
  c[i] += b[i]
print("a = ", end='')
print_vec(a,"{}")
print("b = ", end='')
print_vec(b,"{}")
print("c = ", end='')
print_vec(c,"{}")

#б
c = a[:]
for i in range(n):
  c[i] *= b[i]
print("c = ", end='')
print_vec(c,"{}")

#в
prod = 0
for i in range(n):
  prod += a[i] * b[i]
print("(a,b) =", prod)


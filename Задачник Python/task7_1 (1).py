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

n=int(input("Введите длину массива: "))
#а
x=[]
for i in range(n):
  x.append(random.random()) #добавляем в массив случайное число от 0 до 1
print(f'Массив из {n} вещественных чисел от 0 до 1:', end='\n', sep='')
print_vec(x,"{:.4f}")

#б
x=[]
for i in range(n):
  x.append(random.randint(0,10)) #добавляем в массив случайное целое число от 0 до 10
print(f'Массив из {n} целых чисел от 0 до 10:', end='\n',sep='')
print_vec(x,"{}")

#в
x=[]
for i in range(n):
  #добавляем в массив случайное число от 45 до 46
  x.append(random.random()+45)
print(f'Массив из {n} вещественных чисел от 45 до 46:', end='\n', sep='')
print_vec(x,"{:.4f}")

#г
a = float(input("Введите a:"))
b = float(input("Введите b:"))
x=[]
for i in range(n):
  #добавляем в массив случайное число от a до b
  x.append(random.uniform(a,b))
print(f'Массив из {n} вещественных чисел от {a} до {b}:', end='\n', sep='')
print_vec(x,"{:.4f}")


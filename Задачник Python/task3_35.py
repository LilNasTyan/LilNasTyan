# -*- coding: utf-8 -*-
"""Untitled3.ipynb

Automatically generated by Colaboratory.

Original file is located at
    https://colab.research.google.com/drive/1n6uz_hnwdNZcd1tlAJnOVa_o0AtYl1Pi
"""

n=input("Введите результат преобразований: ")
if int(n) < 10 :
  print("Результат не соответствует условиям задачи!")
else:
    if int(n) < 100:
      x = int(f'{n[0]}{0}{n[1]}')
      print("Задуманное число равно: ", x)
    else:
      if len(n)==3:
        x = int(f'{n[1]}{n[0]}{n[2]}')
        print("Задуманное трехзначное число равно: ", x)
      else:
        print("Результат не соответствует условиям задачи!")


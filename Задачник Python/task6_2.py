# -*- coding: utf-8 -*-
"""Untitled3.ipynb

Automatically generated by Colaboratory.

Original file is located at
    https://colab.research.google.com/drive/1n6uz_hnwdNZcd1tlAJnOVa_o0AtYl1Pi
"""

N = 2000
N_max = 5000
inc_max = 100
r = float(input("Введите процент: r% = "))/100
#а
N_a = N
inc = 0
month = 0
while inc<=inc_max:
  inc = N_a*r
  N_a += inc
  month +=1
print(f'Увеличение вклада более чем на {inc_max} рублей через '\
      f'{month} месяц/а/ев!')

#б
month = 0
while N <=N_max:
  N *= (1+r)
  month +=1
print(f'Размер вклада больше {N_max} рублей через {month} месяц/а/ев!')


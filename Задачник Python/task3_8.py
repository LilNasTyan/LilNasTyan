# -*- coding: utf-8 -*-
"""Untitled3.ipynb

Automatically generated by Colaboratory.

Original file is located at
    https://colab.research.google.com/drive/1n6uz_hnwdNZcd1tlAJnOVa_o0AtYl1Pi
"""

# создаем переменную для серии билета
series = "AB"
# создаем переменную для номера первого билета
number = 1643
ticket=int(input("Введите номер билета: АВ"))
row = ((ticket-number) // 15) % 20 + 1
place = (ticket-number) % 15 +1
print(f'Билет продан на {place} место в {row} ряду.')
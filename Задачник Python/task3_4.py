# -*- coding: utf-8 -*-
"""Untitled3.ipynb

Automatically generated by Colaboratory.

Original file is located at
    https://colab.research.google.com/drive/1n6uz_hnwdNZcd1tlAJnOVa_o0AtYl1Pi
"""

# Ввод числа яблок и числа школьников
apples = int(input('Введите число яблок: '))
students = int(input('Введите число школьников: '))

# Решение задачи
apples_per_student = apples // students
apples_in_basket = apples % students

# Вывод результатов
print('Яблок достанется каждому школьнику: ', apples_per_student)
print('Яблок останется в корзинке: ', apples_in_basket)
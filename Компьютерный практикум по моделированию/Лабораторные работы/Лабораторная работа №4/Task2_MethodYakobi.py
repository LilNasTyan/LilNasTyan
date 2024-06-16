import numpy as np

# Функция для выполнения одной итерации метода Якоби
def jacobi_iteration(x, y, z):
    new_x = (-1 - 2*z) / 2
    new_y = (2 - 5*x + 5*z) / -2
    new_z = (0 - 2*x - 2*y) / 5
    return new_x, new_y, new_z

# Начальные значения для метода Якоби
x, y, z = 0, 0, 0

# Количество итераций
iterations = 10

# Итерационный процесс метода Якоби
for i in range(iterations):
    x, y, z = jacobi_iteration(x, y, z)
    
    # Вывод текущей итерации
    print(f"Итерация {i+1}:")
    print(f"x = {x}, y = {y}, z = {z}")

# Вывод финального решения
print("Решение методом Якоби:")
print(f"x = {x}, y = {y}, z = {z}")




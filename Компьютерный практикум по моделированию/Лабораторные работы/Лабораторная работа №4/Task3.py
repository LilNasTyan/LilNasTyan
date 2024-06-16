import numpy as np

# Функция для вычисления нового значения переменной x по методу Зейделя
def compute_x(y, z, t):
    return (-130 + 6*y - 4*z - 7*t) / 24.0

# Функция для вычисления нового значения переменной y по методу Зейделя
def compute_y(x, z, t):
    return (-139 + 8*x - 4*z + 2*t) / 21.0

# Функция для вычисления нового значения переменной z по методу Зейделя
def compute_z(x, y, t):
    return (84 - 6*x - 6*y) / 16.0

# Функция для вычисления нового значения переменной t по методу Зейделя
def compute_t(x, y, z):
    return (-165 + 7*x + 7*y - 5*z) / 24.0

# Начальные приближения
x, y, z, t = 0.0, 0.0, 0.0, 0.0

# Точность
epsilon = 0.01

while True:
    # Сохраняем предыдущие значения
    prev_x, prev_y, prev_z, prev_t = x, y, z, t
    
    # Вычисляем новые значения по методу Зейделя
    x = compute_x(y, z, t)
    y = compute_y(x, z, t)
    z = compute_z(x, y, t)
    t = compute_t(x, y, z)
    
    # Вывод текущих значений (можно закомментировать, если не нужен вывод промежуточных значений)
    print(f"x = {x}, y = {y}, z = {z}, t = {t}")
    
    # Проверка условия остановки
    if (abs(x - prev_x) < epsilon and abs(y - prev_y) < epsilon and
        abs(z - prev_z) < epsilon and abs(t - prev_t) < epsilon):
        break

# Вывод окончательных значений
print("Final values:")
print(f"x = {x}, y = {y}, z = {z}, t = {t}")





import numpy as np
from scipy.interpolate import newton

# Задаем точки (a, b), где b = cos(a)
pi = np.pi
a = np.array([0.1 * pi, 0.2 * pi, 0.3 * pi, 0.4 * pi])
b = np.cos(a)

# Создаем функцию для интерполяции многочленами Ньютона
poly = newton(a, b)

# Вычисляем значение в точке x* = 0.25 * pi
x_star = 0.25 * pi
interpolated_value = poly(x_star)

# Вычисляем точное значение функции в точке x*
exact_value = np.cos(x_star)

# Вычисляем погрешность
error = np.abs(interpolated_value - exact_value)

# Выводим результаты
print(f"Значение функции в точке x* = {x_star} (интерполяция): {interpolated_value}")
print(f"Точное значение функции в точке x*: {exact_value}")
print(f"Погрешность Δ(y(x*)): {error}")




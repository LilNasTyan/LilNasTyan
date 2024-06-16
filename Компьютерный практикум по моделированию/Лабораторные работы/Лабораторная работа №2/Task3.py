import random
import math

# Генерация случайных параметров гиперболы и координат точки
a = random.uniform(1, 10)
b = random.uniform(1, 10)
x = random.uniform(-20, 20)
y = random.uniform(-20, 20)

# Проверка принадлежности точки гиперболе
def check_point_hyperbola(a, b, x, y):
    return (x**2 / a**2 - y**2 / b**2) == 1

# Координаты фокусов гиперболы
def calculate_foci(a, b):
    c = math.sqrt(a**2 + b**2)
    return (-c, 0), (c, 0)

# Длины действительной и мнимой полуосей
def axes_lengths(a, b):
    return a, b

# Эксцентриситет гиперболы
def eccentricity(a, b):
    c = math.sqrt(a**2 + b**2)
    return c / a

# Расстояние между директрисами
def distance_between_directrices(a, b):
    c = math.sqrt(a**2 + b**2)
    return 2 * a**2 / c

# Основная функция для выполнения всех вычислений
def hyperbola_properties(a, b, x, y):
    point_on_hyperbola = check_point_hyperbola(a, b, x, y)
    foci = calculate_foci(a, b)
    real_axis, imaginary_axis = axes_lengths(a, b)
    ecc = eccentricity(a, b)
    dist_directrices = distance_between_directrices(a, b)

    print(f"Гипербола: x^2/{a**2:.2f} - y^2/{b**2:.2f} = 1")
    print(f"Точка: ({x:.2f}, {y:.2f})")
    print(f"Принадлежит ли точка гиперболе? {'Да' if point_on_hyperbola else 'Нет'}")
    print(f"Координаты фокусов: {foci}")
    print(f"Длина действительной полуоси: {real_axis:.2f}")
    print(f"Длина мнимой полуоси: {imaginary_axis:.2f}")
    print(f"Эксцентриситет гиперболы: {ecc:.2f}")
    print(f"Расстояние между директрисами: {dist_directrices:.2f}")

# Вызов основной функции
hyperbola_properties(a, b, x, y)

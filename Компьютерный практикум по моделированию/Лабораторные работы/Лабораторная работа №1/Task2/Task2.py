import math

# Точность решения
epsilon = 1e-6

# Функция
def f(x):
    return x * math.exp(x) - x - 1

# Производная функции
def df(x):
    return math.exp(x) * (x + 1) - 1

# Метод дихотомии (бисекции)
def bisection(a, b):
    while (b - a) / 2.0 > epsilon:
        c = (a + b) / 2.0
        if f(c) == 0.0:
            return c
        if (f(a) * f(c)) < 0:
            b = c
        else:
            a = c
    return (a + b) / 2.0

# Метод хорд
def secant(x0, x1):
    while abs(x1 - x0) > epsilon:
        x2 = x1 - f(x1) * (x1 - x0) / (f(x1) - f(x0))
        x0 = x1
        x1 = x2
    return x1

# Метод Ньютона
def newton(x0):
    while True:
        x1 = x0 - f(x0) / df(x0)
        if abs(x1 - x0) < epsilon:
            return x1
        x0 = x1

# Метод простых итераций
def iteration(x0):
    while True:
        x1 = math.exp(-x0) + 1
        if abs(x1 - x0) < epsilon:
            return x1
        x0 = x1

if __name__ == "__main__":
    a, b = 0.0, 2.0  # Интервал для метода дихотомии

    print("Method of Bisection: {:.6f}".format(bisection(a, b)))
    print("Method of Secant: {:.6f}".format(secant(a, b)))
    print("Method of Newton: {:.6f}".format(newton(b)))
    print("Method of Iteration: {:.6f}".format(iteration(0.5)))

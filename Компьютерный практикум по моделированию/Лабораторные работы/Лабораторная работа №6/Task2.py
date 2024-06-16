import numpy as np

# Функция f(x, y) = x^2 + exp(x^2 + y^2) + 4x + 3y
def f(x, y):
    return x**2 + np.exp(x**2 + y**2) + 4*x + 3*y

# Градиент функции f(x, y)
def gradient(x, y):
    # df/dx = 2x + 2x * exp(x^2 + y^2) + 4
    grad_x = 2*x + 2*x * np.exp(x**2 + y**2) + 4
    
    # df/dy = 2y * exp(x^2 + y^2) + 3
    grad_y = 2*y * np.exp(x**2 + y**2) + 3
    
    return grad_x, grad_y

# Метод наискорейшего спуска для поиска минимума функции
def gradient_descent(x0, y0, learning_rate, max_iter):
    x = x0
    y = y0
    
    for iter in range(max_iter):
        # Вычисляем градиент функции в текущей точке
        grad_x, grad_y = gradient(x, y)
        
        # Выполняем шаг градиентного спуска
        x -= learning_rate * grad_x
        y -= learning_rate * grad_y
        
        # Выводим текущие значения x, y и f(x, y)
        print(f"Iter {iter + 1}: x = {x}, y = {y}, f(x, y) = {f(x, y)}")
    
    print(f"Optimal solution: x = {x}, y = {y}, f(x, y) = {f(x, y)}")

if __name__ == "__main__":
    x0 = 1.0  # Начальная точка x
    y0 = -1.0  # Начальная точка y
    learning_rate = 0.1  # Скорость обучения (learning rate)
    max_iter = 100  # Максимальное количество итераций
    
    # Запускаем метод наискорейшего спуска
    gradient_descent(x0, y0, learning_rate, max_iter)

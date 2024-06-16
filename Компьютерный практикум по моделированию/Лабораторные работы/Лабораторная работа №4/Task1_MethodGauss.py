import numpy as np

# Функция для печати матрицы
def print_matrix(matrix):
    for row in matrix:
        print(row)

# Метод Гаусса для решения СЛАУ
def solve_gauss(A, b):
    n = len(A)
    
    # Прямой ход метода Гаусса
    for i in range(n):
        # Поиск максимального элемента в столбце i (под i-м элементом)
        max_row = i
        for k in range(i + 1, n):
            if abs(A[k, i]) > abs(A[max_row, i]):
                max_row = k
        
        # Поменять строки местами
        A[[i, max_row]] = A[[max_row, i]]
        b[[i, max_row]] = b[[max_row, i]]
        
        # Обнуление под i-м элементом в столбце i
        for k in range(i + 1, n):
            coef = -A[k, i] / A[i, i]
            A[k, i:] += coef * A[i, i:]
            b[k] += coef * b[i]
    
    # Обратный ход метода Гаусса
    x = np.zeros(n)
    for i in range(n - 1, -1, -1):
        x[i] = (b[i] - np.dot(A[i, i + 1:], x[i + 1:])) / A[i, i]
    
    return x

# Исходная система уравнений
A = np.array([[2, -7, 8, -4],
              [0, -1, 4, -1],
              [3, -4, 2, -1],
              [-9, 1, -4, 46]], dtype=float)

b = np.array([57, 24, 28, 12], dtype=float)

# Решение методом Гаусса
solution = solve_gauss(A, b)

# Вывод решения
print("Solution by Gauss method:")
for i, sol in enumerate(solution):
    print(f"x[{i}] = {sol}")




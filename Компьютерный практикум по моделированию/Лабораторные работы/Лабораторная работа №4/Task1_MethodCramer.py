import numpy as np

# Функция для печати матрицы
def print_matrix(matrix):
    for row in matrix:
        print(row)

# Функция для вычисления определителя матрицы
def determinant(matrix):
    return np.linalg.det(matrix)

# Матричный метод (метод Крамера) для решения СЛАУ
def solve_matrix_method(A, b):
    n = len(A)
    x = np.zeros(n)
    
    # Вычисление определителя матрицы A
    detA = determinant(A)
    
    # Проверка, что detA != 0
    if np.isclose(detA, 0):
        raise ValueError("Determinant of matrix A is zero. No unique solution exists.")
    
    # Вычисление x[i] как определитель матрицы, где i-й столбец заменен на b
    for i in range(n):
        Ai = A.copy()
        Ai[:, i] = b
        x[i] = determinant(Ai) / detA
    
    return x

# Исходная система уравнений
A = np.array([[2, -7, 8, -4],
              [0, -1, 4, -1],
              [3, -4, 2, -1],
              [-9, 1, -4, 46]], dtype=float)

b = np.array([57, 24, 28, 12], dtype=float)

# Решение матричным методом (методом Крамера)
solution = solve_matrix_method(A, b)

# Вывод решения
print("Solution by matrix method (Cramer's rule):")
for i, sol in enumerate(solution):
    print(f"x[{i}] = {sol}")




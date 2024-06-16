import numpy as np

def solve_system():
    # Коэффициенты системы уравнений
    A = np.array([[7, -5, 0, 0, 0],
                  [-6, 19, -9, 0, 0],
                  [0, 6, -18, 7, 0],
                  [0, 0, -7, -11, -2],
                  [0, 0, 0, 5, -7]], dtype=float)
    
    D = np.array([38, 14, -45, 30, 48], dtype=float)  # Свободные члены
    
    n = len(D)
    
    # Прямой проход метода прогонки
    for i in range(1, n):
        m = A[i][i-1] / A[i-1][i-1]
        A[i] -= m * A[i-1]
        D[i] -= m * D[i-1]
    
    # Обратный проход метода прогонки
    x = np.zeros(n, dtype=float)
    x[n-1] = D[n-1] / A[n-1][n-1]
    
    for i in range(n-2, -1, -1):
        x[i] = (D[i] - np.dot(A[i][i+1:], x[i+1:])) / A[i][i]
    
    return x

# Решение системы
solution = solve_system()

# Вывод результатов
print("Solution:")
print(f"x = {solution[0]}")
print(f"y = {solution[1]}")
print(f"z = {solution[2]}")
print(f"t = {solution[3]}")
print(f"v = {solution[4]}")





import numpy as np

# Задание матрицы коэффициентов и вектора свободных членов
A = np.array([[0, 2, 2],
              [5, -2, 5],
              [2, 2, 5]])

b = np.array([-1, 2, 0])

# Вычисление определителя матрицы A
det_A = np.linalg.det(A)

if np.abs(det_A) < 1e-10:  # Проверка, что определитель не равен нулю
    print("Определитель матрицы A равен нулю. Метод Крамера не применим.")
else:
    # Вычисление определителей для каждого неизвестного
    A1 = A.copy()
    A1[:, 0] = b
    det_A1 = np.linalg.det(A1)
    
    A2 = A.copy()
    A2[:, 1] = b
    det_A2 = np.linalg.det(A2)
    
    A3 = A.copy()
    A3[:, 2] = b
    det_A3 = np.linalg.det(A3)
    
    # Вычисление решений по формулам Крамера
    x = det_A1 / det_A
    y = det_A2 / det_A
    z = det_A3 / det_A
    
    # Вывод решений
    print("Решение методом Крамера:")
    print(f"x = {x}")
    print(f"y = {y}")
    print(f"z = {z}")




import math

# Функция, которую мы оптимизируем
def f(x, y, z):
    term1 = math.exp(x*x + y*y)
    term2 = math.log(4 + y*y + 2*z*z)
    return term1 + term2

# Метод покоординатного спуска
def coordinate_descent(x, y, z, epsilon=1e-6):
    step = 0.1  # Начальный шаг изменения координат

    while step > epsilon:
        x_orig, y_orig, z_orig = x, y, z

        # Изменяем x
        fx_orig = f(x, y, z)
        x += step
        fx_plus_x = f(x, y, z)
        if fx_plus_x < fx_orig:
            # Если функция уменьшилась, оставляем x таким
            continue
        else:
            # Возвращаем x на предыдущее значение
            x = x_orig

        # Изменяем y
        fy_orig = f(x, y, z)
        y += step
        fy_plus_y = f(x, y, z)
        if fy_plus_y < fy_orig:
            # Если функция уменьшилась, оставляем y таким
            continue
        else:
            # Возвращаем y на предыдущее значение
            y = y_orig

        # Изменяем z
        fz_orig = f(x, y, z)
        z += step
        fz_plus_z = f(x, y, z)
        if fz_plus_z < fz_orig:
            # Если функция уменьшилась, оставляем z таким
            continue
        else:
            # Возвращаем z на предыдущее значение
            z = z_orig

        # Уменьшаем шаг
        step *= 0.9

    return x, y, z

# Точка входа в программу
if __name__ == "__main__":
    x, y, z = 0.0, 0.0, 0.0

    # Находим минимум методом покоординатного спуска
    x_min, y_min, z_min = coordinate_descent(x, y, z)

    # Выводим найденные значения
    print("Минимум функции f(x, y, z) = e^(x^2 + y^2) + ln(4 + y^2 + 2z^2) достигается в точке:")
    print(f"x = {x_min}, y = {y_min}, z = {z_min}")
    print(f"Значение функции в этой точке: {f(x_min, y_min, z_min)}")


import numpy as np

# Параметры гиперболического цилиндра
a = np.random.uniform(1, 10)
b = np.random.uniform(1, 10)

# Параметры плоскости
A = np.random.uniform(-10, 10)
B = np.random.uniform(-10, 10)
C = np.random.uniform(-10, 10)
D = np.random.uniform(-10, 10)

# Параметры прямой
r0 = np.random.uniform(-10, 10, 3)
d = np.random.uniform(-10, 10, 3)

# Координаты точки
point = np.random.uniform(-10, 10, 3)

def point_in_hyperbolic_cylinder(x, y, z, a, b):
    return np.isclose((x**2 / a**2 - y**2 / b**2), 1)

def plane_intersects_cylinder(a, b, A, B, C, D):
    if C == 0:
        return False

    # Решаем уравнение: x^2 / a^2 - y^2 / b^2 = 1 при z = -(Ax + By + D) / C
    def f(x, y):
        z = -(A*x + B*y + D) / C
        return (x**2 / a**2 - y**2 / b**2) - 1

    # Проверка для нескольких значений x и y
    for x in np.linspace(-10, 10, 100):
        for y in np.linspace(-10, 10, 100):
            if np.isclose(f(x, y), 0):
                return True
    return False

def line_intersects_cylinder(a, b, r0, d):
    # Подставляем параметрическое уравнение прямой в уравнение цилиндра и решаем
    A = d[0]**2 / a**2 - d[1]**2 / b**2
    B = 2 * (r0[0]*d[0] / a**2 - r0[1]*d[1] / b**2)
    C = r0[0]**2 / a**2 - r0[1]**2 / b**2 - 1

    discriminant = B**2 - 4*A*C
    if discriminant < 0:
        return False
    t1 = (-B + np.sqrt(discriminant)) / (2 * A)
    t2 = (-B - np.sqrt(discriminant)) / (2 * A)
    return True

# Проверка принадлежности точки
point_belongs = point_in_hyperbolic_cylinder(*point, a, b)

# Проверка пересечения плоскости с цилиндром
plane_intersects = plane_intersects_cylinder(a, b, A, B, C, D)

# Проверка пересечения прямой с цилиндром
line_intersects = line_intersects_cylinder(a, b, r0, d)

print(f"Point {point} belongs to hyperbolic cylinder: {point_belongs}")
print(f"Plane intersects hyperbolic cylinder: {plane_intersects}")
print(f"Line intersects hyperbolic cylinder: {line_intersects}")

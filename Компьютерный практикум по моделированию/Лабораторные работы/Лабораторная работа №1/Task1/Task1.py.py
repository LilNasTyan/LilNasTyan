import cmath

# Определение комплексных чисел
a = complex(1.0, 1.0)  # 1 + i
b = complex(4.0, -1.0)  # 4 - i
d = complex(-1.0, -2.0)  # -1 - 2i

# Вычисление суммы, разности, произведения и деления
summa = a + b
raznost = a - b
umnozhenie = a * b
delenie = a / b
stepen4 = d ** 4

# Вычисление модуля и аргумента комплексного числа d
magnitude = abs(d)
angle = cmath.phase(d)

# Вычисление корней третьей степени
koren1 = cmath.rect(magnitude**(1/3), angle / 3)
koren2 = cmath.rect(magnitude**(1/3), (angle + 2 * cmath.pi) / 3)
koren3 = cmath.rect(magnitude**(1/3), (angle + 4 * cmath.pi) / 3)

# Вывод результатов
print(f"a = {a}")
print(f"b = {b}")
print(f"d = {d}\n")

print(f"a + b = {summa}")
print(f"a - b = {raznost}")
print(f"a * b = {umnozhenie}")
print(f"a / b = {delenie}\n")
print(f"d ** 4 = {stepen4}\n")

print(f"Корни третьей степени для числа {d}:")
print(f"Корень 1: {koren1}")
print(f"Корень 2: {koren2}")
print(f"Корень 3: {koren3}")

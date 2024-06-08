#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

struct Point {
    double x, y;
};

struct Line {
    double a, b, c; // уравнение прямой в виде ax + by + c = 0
};

// Функция для генерации случайного числа в заданном диапазоне
double getRandomNumber(double min, double max) {
    return min + static_cast<double>(rand()) / (static_cast<double>(RAND_MAX / (max - min)));
}

// Функция для вычисления расстояния от точки до прямой
double distanceFromPointToLine(const Point& p, const Line& l) {
    return fabs(l.a * p.x + l.b * p.y + l.c) / sqrt(l.a * l.a + l.b * l.b);
}

// Функция для нахождения точки пересечения двух прямых
Point intersectionPoint(const Line& l1, const Line& l2) {
    double determinant = l1.a * l2.b - l2.a * l1.b;
    if (determinant == 0) {
        cerr << "Прямые параллельны или совпадают, точки пересечения нет." << endl;
        exit(1); // выход из программы, поскольку точки пересечения нет
    }
    double x = (l2.b * -l1.c - l1.b * -l2.c) / determinant;
    double y = (l1.a * -l2.c - l2.a * -l1.c) / determinant;
    return { x, y };
}

// Функция для нахождения расстояния между двумя точками
double distanceBetweenPoints(const Point& p1, const Point& p2) {
    return sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y));
}

// Функция для нахождения угла между двумя прямыми
double angleBetweenLines(const Line& l1, const Line& l2) {
    double angle = atan(fabs((l1.a * l2.b - l2.a * l1.b) / (l1.a * l2.a + l1.b * l2.b)));
    return angle * (180.0 / M_PI); // преобразование угла в градусы
}

int main() {
    srand(static_cast<unsigned int>(time(0))); // Инициализация генератора случайных чисел

    // Случайное определение параметров прямых и координат точки
    Line l1 = { getRandomNumber(-10, 10), getRandomNumber(-10, 10), getRandomNumber(-10, 10) };
    Line l2 = { getRandomNumber(-10, 10), getRandomNumber(-10, 10), getRandomNumber(-10, 10) };
    Point p = { getRandomNumber(-10, 10), getRandomNumber(-10, 10) };

    // Вывод случайно сгенерированных значений
    cout << "Параметры первой прямой: " << l1.a << "x + " << l1.b << "y + " << l1.c << " = 0" << endl;
    cout << "Параметры второй прямой: " << l2.a << "x + " << l2.b << "y + " << l2.c << " = 0" << endl;
    cout << "Координаты точки: (" << p.x << ", " << p.y << ")" << endl;

    // Вычисление расстояний от точки до прямых
    double dist1 = distanceFromPointToLine(p, l1);
    double dist2 = distanceFromPointToLine(p, l2);

    cout << "Расстояние от точки до первой прямой: " << dist1 << endl;
    cout << "Расстояние от точки до второй прямой: " << dist2 << endl;

    // Нахождение точки пересечения прямых
    Point intersection = intersectionPoint(l1, l2);
    cout << "Точка пересечения прямых: (" << intersection.x << ", " << intersection.y << ")" << endl;

    // Вычисление расстояния от заданной точки до точки пересечения прямых
    double distanceToIntersection = distanceBetweenPoints(p, intersection);
    cout << "Расстояние от заданной точки до точки пересечения прямых: " << distanceToIntersection << endl;

    // Нахождение угла между прямыми
    double angle = angleBetweenLines(l1, l2);
    cout << "Угол между прямыми: " << angle << " градусов" << endl;

    return 0;
}
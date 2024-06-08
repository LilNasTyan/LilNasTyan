#include <iostream>
#include <cmath>

using namespace std;

// Структура для представления точки в трехмерном пространстве
struct Point {
    double x, y, z;
};

// Структура для представления уравнения прямой в трехмерном пространстве: ax + by + cz = 0
struct Line {
    double a, b, c; // Коэффициенты уравнения прямой
};

// Функция для вычисления расстояния между двумя точками
double distance(const Point& p1, const Point& p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2) + pow(p2.z - p1.z, 2));
}

// Функция для вычисления скалярного произведения двух прямых
double dotProduct(const Line& l1, const Line& l2) {
    return l1.a * l2.a + l1.b * l2.b + l1.c * l2.c;
}

// Функция для вычисления угла между двумя прямыми в градусах
double angleBetweenLines(const Line& l1, const Line& l2) {
    double dot = dotProduct(l1, l2);
    double magL1 = sqrt(pow(l1.a, 2) + pow(l1.b, 2) + pow(l1.c, 2));
    double magL2 = sqrt(pow(l2.a, 2) + pow(l2.b, 2) + pow(l2.c, 2));
    return acos(dot / (magL1 * magL2)) * 180.0 / M_PI; // Преобразование радиан в градусы
}

// Функция для вычисления расстояния от точки до прямой
double distanceToLine(const Point& p, const Line& l) {
    return abs(l.a * p.x + l.b * p.y + l.c * p.z) / sqrt(pow(l.a, 2) + pow(l.b, 2) + pow(l.c, 2));
}

// Функция для нахождения точки пересечения двух прямых
Point intersectionPoint(const Line& l1, const Line& l2) {
    Point intersection;
    double A = l1.b * l2.c - l1.c * l2.b;
    double B = l1.c * l2.a - l1.a * l2.c;
    double C = l1.a * l2.b - l1.b * l2.a;
    double D = -(l1.a * l1.c + l1.b * l1.b);
    double E = -(l2.a * l2.c + l2.b * l2.b);
    
    intersection.x = (B * E - C * D) / (A * A + B * B);
    intersection.y = (C * D - A * E) / (A * A + B * B);
    intersection.z = 1.0;
    
    return intersection;
}

int main() {
    srand(time(NULL));

    // Генерация случайных коэффициентов для двух прямых
    Line line1 = {double(rand() % 10 - 5), double(rand() % 10 - 5), double(rand() % 10 - 5)};
    Line line2 = {double(rand() % 10 - 5), double(rand() % 10 - 5), double(rand() % 10 - 5)};

    // Генерация случайных координат для точки
    Point point = {double(rand() % 10 - 5), double(rand() % 10 - 5), double(rand() % 10 - 5)};

    // Вычисление угла между прямыми
    double angle = angleBetweenLines(line1, line2);
    cout << "Угол между прямыми: " << angle << " градусов" << endl;

    // Проверка параллельности прямых
    if (angle < 0.00001) {
        cout << "Прямые параллельны." << endl;
        // Вычисление расстояния между параллельными прямыми
        double distanceBetweenLines = distanceToLine(point, line1);
        cout << "Расстояние между прямыми: " << distanceBetweenLines << endl;
    } else {
        cout << "Прямые не параллельны." << endl;
        // Вычисление точки пересечения
        Point intersection = intersectionPoint(line1, line2);
        cout << "Точка пересечения: (" << intersection.x << ", " << intersection.y << ", " << intersection.z << ")" << endl;
        // Вычисление расстояния от данной точки до точки пересечения
        double distanceToIntersection = distance(point, intersection);
        cout << "Расстояние от данной точки до точки пересечения: " << distanceToIntersection << endl;
    }

    // Вычисление расстояний от точки до каждой прямой
    double distanceToLine1 = distanceToLine(point, line1);
    double distanceToLine2 = distanceToLine(point, line2);
    cout << "Расстояние от данной точки до прямой 1: " << distanceToLine1 << endl;
    cout << "Расстояние от данной точки до прямой 2: " << distanceToLine2 << endl;

    return 0;
}

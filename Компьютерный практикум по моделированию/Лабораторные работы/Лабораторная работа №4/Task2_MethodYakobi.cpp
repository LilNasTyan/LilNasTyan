#include <iostream>
#include <cmath>

using namespace std;

// Функция для вычисления следующей итерации метода Якоби
void jacobiIteration(float& x, float& y, float& z) {
    float newX = (-1 - 2*z) / 2;
    float newY = (2 - 5*x + 5*z) / -2;
    float newZ = (0 - 2*x - 2*y) / 5;
    
    x = newX;
    y = newY;
    z = newZ;
}

int main() {
    // Начальные значения для метода Якоби
    float x = 0, y = 0, z = 0;
    
    // Количество итераций
    int iterations = 10;
    
    // Итерационный процесс метода Якоби
    for (int i = 0; i < iterations; ++i) {
        jacobiIteration(x, y, z);
        
        // Вывод текущей итерации
        cout << "Итерация " << i+1 << ": " << endl;
        cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
    }
    
    // Вывод финального решения
    cout << "Решение методом Якоби:" << endl;
    cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
    
    return 0;
}




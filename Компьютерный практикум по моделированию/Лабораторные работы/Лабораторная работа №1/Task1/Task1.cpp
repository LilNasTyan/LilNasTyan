#include <iostream>
#include <complex>
#include <cmath>
#include <clocale>

using namespace std;

double M_PI = 3.14159265358979323846;

ostream& operator<<(ostream& os, const complex<double>& c) 
{
    os << c.real();
    if (c.imag() != 0) 
    {
        if (c.imag() > 0) 
        {
            os << " + " << c.imag() << 'i';
        }
        else 
        {
            os << " - " << -c.imag() << 'i';
        }
    }
    return os;
}

int main() 
{
    setlocale(LC_ALL, "RUS");

    complex<double> a(1.0, 1.0); // 1 + i
    complex<double> b(4.0, -1.0); // 4 - i
    complex<double> d(-1.0, -2.0); // -1 - 2i

    cout << "a = 1 + i" << endl;
    cout << "b = 4 - i" << endl;
    cout << "d = -1 - 2i" << endl << endl;

    complex<double> summa = a + b;
    complex<double> raznost = a - b;
    complex<double> umnozhenie = a * b;
    complex<double> delenie = a / b;
    complex<double> stepen4 = d * d * d * d;

    double modul = abs(d);
    double ugol = arg(d);

    complex<double> koren1 = polar(pow(modul, 1.0 / 3.0), ugol / 3.0);
    complex<double> koren2 = polar(pow(modul, 1.0 / 3.0), (ugol + 2 * M_PI) / 3.0);
    complex<double> koren3 = polar(pow(modul, 1.0 / 3.0), (ugol + 4 * M_PI) / 3.0);

    cout << "a + b = " << summa << endl;
    cout << "a - b = " << raznost << endl;
    cout << "a * b = " << umnozhenie << endl;
    cout << "a / b = " << delenie << endl << endl;
    cout << "d * d * d * d = " << stepen4 << endl;

    cout << "Корни третьей степени для числа " << d << ":" << endl;
    cout << "Корень 1: " << koren1 << endl;
    cout << "Корень 2: " << koren2 << endl;
    cout << "Корень 3: " << koren3 << endl;

    return 0;
}

#include <iostream>
#include <complex>
using namespace std;

int koef(double a, double b, double c, complex<double>& x1, complex<double>& x2);

int main()
{
    setlocale(LC_ALL, "Russian");

    double a, b, c;
    cout << "f(x)=a(x^2)+b(x)+c" << endl;
    cout << "a="; cin >> a;
    cout << "b="; cin >> b;
    cout << "c="; cin >> c;
    complex<double> dx1, dx2;
    int res = koef(a, b, c, dx1, dx2);
    if (res == -1){
        cout << "Корни - комплексные" << endl << dx1 << " " << dx2 << endl;
    }
    else if (res == 1){
        cout << "Корни - действительные: " << endl << "x1: " << dx1.real() << " " << "x2: " << dx2.real() << endl;
    }
    else
        cout << endl << "a=0, так на пойдет...\n";

    system("pause");
    return 0;
}

int koef(double a, double b, double c, complex<double>& x1, complex<double>& x2)
{
    if (a == 0)
        return 0;
    double d = b * b - 4.0 * a * c;
    if (d < 0){
        x1=complex<double>(-b/(2.0*a), sqrt(-d)/(2.0*a)); x2=complex<double>(-b / (2.0 * a), -sqrt(-d) / (2.0 * a));
        return -1;
    }
    x1=complex<double>((-b+sqrt(d))/(2.0*a), 0); x2=complex<double>((-b - sqrt(d)) / (2.0 * a), 0);
    return 1;
}

//Не ставьте 2, p.s Сошников
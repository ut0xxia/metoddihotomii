#include <iostream>
#include <complex>
using namespace std;

int main()
{
	double x1, y1, x2, y2;
	
	cin >> x1 >> y1;
	complex<double>z1(x1, y1);
	cin.get();
	//w(z)=z1^2
	complex<double>z2(x2, y2);
	z2 = z1 * z1;
	cout << z1 << endl;
	cout << z2;
	return 0;
}
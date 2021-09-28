#include <iostream>
#include <../fparser.hh>
using namespace std;

int main()
{
	double left, right, x, eps, resultx, resultright;
	string function;
	FunctionParser fp; 
	cout << "f(x)=";
	cin >> function;
	fp.Parse(function, "x");
	cout << "A=";
	cin >> left;
	cout << "B=";
	cin >> right;
	cout << "E=";
	cin >> eps;
	while ((right - left) > eps)
	{
		x = (left + right) / 2;
		resultx = fp.Eval(&x);
		resultright = fp.Eval(&right);
		if (resultx * resultright <= 0) left = x;
		else right = x;
	}
	cout << "x=" << x;
	return 0;
} 
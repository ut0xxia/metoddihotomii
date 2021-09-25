#include <iostream>
using namespace std;
//y=2x-7
int main()
{
	float left, right, x, eps;
	cin >> left >> right >> eps;
	x = (left+right)/2;
	while ((right - left) > eps)
	{
		x = (left + right) / 2;
		if ((2 * x - 7) * (right * 2 - 7) <= 0) left=x;
		else right=x;
	}
	cout << x;
}
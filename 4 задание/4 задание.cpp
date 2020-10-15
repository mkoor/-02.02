#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	setlocale(LC_ALL, "rus");

	double x, e, p, s;
	cout << "Введите х: ";
	cin >> x >> e; 
	s = p = x;

	for (int n = 1; abs(p) > e; n++) { s += p = -p * x * x / (2 * n) / (2 * n + 1); }
	cout << "sin(" << x << ")=" << s;
	cin.get(); 
	cin.get();
}
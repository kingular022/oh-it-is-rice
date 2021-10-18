#include <iostream>
using namespace std;

int main()
{
	float a, b;
	cout << "podaj a: " << endl;
	cin >> a;
	cout << "podaj b: " << endl;
	cin >> b;

	if (a == b)
		cout << "liczby sa rowne" << endl;
	else if (a > b)
		cout << "a jest wieksze od b" << endl;
	else
		cout << "b jest wieksze od a" << endl;
}

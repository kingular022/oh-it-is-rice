#include <iostream>
using namespace std;

int main()
{
	float a, b, c, delta;
	cout << "Podaj a,b i c: " << endl;
	cin >> a >> b >> c;

	if (a != 0)
	{
		delta = (b * b) - (4 * a * c);

		if (delta == 0)
		{
			cout << "jedno rozwiazanie, x1 = " << -b / (2 * a) << endl;
		}
		else if (delta > 0)
		{
			cout << "dwa rozwiazania: \n";
			cout << "x1 = " << (-b - sqrt(delta)) / (2 * a) << endl;
			cout << "x2 = " << (-b + sqrt(delta)) / (2 * a) << endl;
		}
		else
			cout << "brak rozwiazania" << endl;
	}
	else
	{
		if (b == 0)
		{
			if (c == 0)
				cout << "rownanie tozsamosciowe" << endl;
			else
				cout << "rownanie sprzeczne" << endl;
		}
		else
		{
			cout << "x = " << -b / a;
		}
	}
}


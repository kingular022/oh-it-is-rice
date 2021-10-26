#include <iostream>
using namespace std;

int main()
{
	float a, b;

	cout << "Podaj a i b: " << endl;
	cin >> a >> b;

	if (a == 0)
	{
		if (b == 0)
			cout << "rownanie tozsamosciowe" << endl;
		else
			cout << "rownanie sprzeczne" << endl;
	}
	else
	{
		cout << "x = " << -b / a;
	}
}

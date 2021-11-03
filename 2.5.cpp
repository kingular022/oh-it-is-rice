#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	int n, a, suma = 0, iloczyn = 1;
	cout << "Podaj ilosc liczb: ";
	cin >> n;

	if (n > 0)
	{
		for (int i = 0; i < n; i++)
		{
			a = rand() % 56 - 5;
			cout << a << endl;

			if (a % 2 == 0)
			{
				suma += a;
				iloczyn *= a;
			}
		}
		cout << "suma liczb parzystych: " << suma << endl;
		cout << "iloczyn liczb parzystych: " << iloczyn << endl;
	}
	else
		cout << "n nie moze byc liczba ujemna" << endl;

}

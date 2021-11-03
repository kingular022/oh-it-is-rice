#include <iostream>
using namespace std;

int main()
{

	int n, ile_u = 0, ile_d = 0, suma_u = 0, suma_d = 0;

	for (int i = 0; i < 10; i++)
	{
		cout << "Podaj liczbe: ";
		cin >> n;

		if (n >= 0)
		{
			ile_d++;
			suma_d += n;
		}
		else
		{
			ile_u++;
			suma_u += n;
		}
	}

	cout << "Ilosc liczb ujemnych: " << ile_u << ", suma: " << suma_u << endl;
	cout << "Ilosc liczb dodatnich: " << ile_d << ", suma: " << suma_d << endl;
}
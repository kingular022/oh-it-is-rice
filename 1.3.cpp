#include <iostream>
using namespace std;

int main()
{
	int i = 0, n, p, suma = 0;
	float srednia;

	cout << "Podaj liczbe studentow: ";
	cin >> n;

	while (i < n)
	{
		cout << "Podaj liczbe punktow tego studenta" << endl;
		cin >> p;
		if (p >= 0 && p <= 100)
			suma += p;
		else
		{
			cout << "Blad, zacznij od nowa" << endl;
			continue;
		}
		i++;
	}

	srednia = suma / n;
	cout << "srednia liczba punktow tej grupy to:" << srednia << endl;


}
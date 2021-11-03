#include <iostream>
using namespace std;

int main()
{
	int i = 0, n, p, suma=0;
	float srednia;

	cout << "Podaj liczbe studentow: ";
	cin >> n;
	cout << "Podaj liczbe punktow kazdego studenta" << endl;

	while (i < n)
	{
		cin >> p;
		suma += p;
		i++;
	}

	srednia = suma / n;
	cout << "srednia liczba punktow tej grupy to:" << srednia << endl;

}
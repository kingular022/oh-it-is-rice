#include <iostream>
using namespace std;

int main()
{
	int i = 0, j = 0, n;

	cout << "Podaj liczbe: ";
	cin >> n;

	cout << "While:\n";

	while (i < n)
	{
		cout << i << endl;
		i++;
	}

	cout << "Do while:\n";

	do
	{
		cout << j << endl;
		j++;
	} while (j < n);

	cout << "For:\n";

	for (int i = 0; i < n; i++)
	{
		cout << i << endl;
	}
}

#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	/*
	//zad1

	int tab[10], x = 3;

	for (int i = 0; i < 10; i++)
	{
		tab[i] = x;
		cout << tab[i] << " ";
		x += 3;
	}

	//zad2

	int tab[10], x = 3;

	for (int i = 0; i < 10; i+=2)
	{
		tab[i] = x;
		cout << tab[i] << " ";
		x += 3;
	}

	//zad3

	int tab[10], x = 0, a;

	cout << "podaj a: ";
	cin >> a;

	for (int i = 9; i >= 0; i--)
	{
		tab[i] = a - x;
		cout << tab[i] << " ";
		x += 5;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << tab[i] << " ";
	}

	//zad4

	srand(time(NULL));
	int a, min = 51, tab[10];

	for (int i = 0; i < 10; i++)
	{
		tab[i] = rand() % 50 + -23;
		cout << tab[i] << endl;

		if (min > tab[i])
		{
			min = tab[i];
		}
		cout << "minimum: " << min << endl;
	}

	//zad5

	int x1, x2;
	int tab[6];
	cout << "podaj dwie pierwsze wartosci tablicy:" << endl;
	cin >> x1 >> x2;

	tab[0] = x1;
	tab[1] = x2;

	for (int i = 2; i < 6; i++)
	{
		tab[i] = tab[i - 1] + tab[i - 2];
		cout << tab[i] << " ";
	}

	//zad6

	int tab[20];
	for (int i = 0; i < 20; i++)
	{
		if (i < 10)
		{
			tab[i] = i;
			cout << tab[i] << endl;
		}
		else
		{
			tab[i] = tab[i - 10];
			cout << tab[i] << endl;
		}
	}


	//zad7

	int suma = 0;
	int tab[3][3] = { 1,2,3,4,5,6,7,8,9 };

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << tab[i][j] << "\t";

			if (i == j)
			{
				cout << endl;
				suma += tab[i][j];
			}
		}
	}
	cout << "Suma elementow przekatnej macierzy: " << suma << endl;
	
	//zad8

	int tab1[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int tab2[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int suma[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			suma[i][j] = tab1[i][j] + tab2[i][j];
			cout << suma[i][j] << "\t";
		}
		cout << endl;
	}
	*/
}

#include <iostream>
using namespace std;

int main()
{
		double a, b;
		int wybor;
		cout << "podaj a: ";
		cin >> a;
		cout << "podaj b: ";
		cin >> b;

		cout << endl;
		cout << "Wybierz dzialanie" << endl;
		cout << endl;
		cout << "1. suma" << endl;
		cout << "2. roznica" << endl;
		cout << "3. iloczyn" << endl;
		cout << "4. iloraz" << endl;
		cout << endl;

		cin >> wybor;

		switch (wybor)
		{	
		case 1:
			cout << "suma: " << a + b << endl;
			break;
		case 2: 
			cout << "roznica: " << a - b << endl;
			break;
		case 3:
			cout << "iloczyn: " << a * b << endl;
			break;
		case 4:
			if (b == 0)
				cout << "nie mozna dzielic przez zero";
			else
				cout << "iloraz: " << a / b << endl;
			break;
		default:
			cout << " nie ma takiej opcji" << endl;
		}
}

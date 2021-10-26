#include <iostream>
using namespace std;

int main()
{
	bool autobus, deszcz;
	cout << "0 - nie, 1 - tak" << endl;

	cout << "Czy pada deszcz? " << endl;
	cin >> deszcz;
	cout << "Czy autobus jest na przystanku? " << endl;
	cin >> autobus;

	if (deszcz && autobus)
		cout << "Wez parasol, dostaniesz sie na uczelnie";
	else if (deszcz && !autobus)
		cout << "Nie dostaniesz sie na uczelnie";
	else if (autobus && !deszcz)
		cout << "Dostaniesz sie na uczelnie, milego dnia i pieknej pogody";
	else
		cout << "Nie dostaniesz sie na uczelnie, milego dnia i pieknej pogody ";
}


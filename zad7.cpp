#include <iostream>
using namespace std;

int main()
{
	bool znizka, premia;
	cout << "0 - nie, 1 - tak" << endl;

	cout << "Czy jest znizka na samochod?" << endl;
	cin >> znizka;
	cout << "Czy otrzymales premie?" << endl;
	cin >> premia;

	if (!znizka || premia)
	{
		cout << "Mozesz kupic samochod!" << endl;
		cout << "Znizki na samochod nie ma" << endl;
	}
	else if (znizka || premia)
		cout << "Mozesz kupic samochod!" << endl;
	else if(znizka || !premia)
		cout << "Jest znizka na samochod, mozesz go kupic" << endl;
	else
	{
		cout << "Zakup samochodu trzeba odlozyc na pozniej ..." << endl;
		cout << "Znizki na samochod nie ma" << endl;
	}
}


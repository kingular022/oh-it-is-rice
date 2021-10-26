#include <iostream>
using namespace std;

int main()
{
	float x;
	cin >> x;

	if (x > 2)
		cout << "a(x) = " << 2 + x << endl;
	else if (x == 2)
		cout << "a(x) = " << 8 << endl;
	else
		cout << "a(x) = " << x - 4 << endl;
}


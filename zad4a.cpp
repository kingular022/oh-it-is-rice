#include <iostream>
using namespace std;

int main()
{
	float x;
	cin >> x;

	if (x > 0)
		cout << "a(x) = " << 2 * x << endl;
	else if (x == 0)
		cout << "a(x) = " << 0 << endl;
	else
		cout << "a(x) = " << -3 * x << endl;
}


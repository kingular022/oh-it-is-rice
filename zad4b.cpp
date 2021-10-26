#include <iostream>
using namespace std;

int main()
{
	float x;
	cin >> x;

	if (x >= 1)
		cout << "a(x) = " << pow(x, 2) << endl;
	else
		cout << "a(x) = " << x << endl;
}

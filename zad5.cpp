#include <iostream>
using namespace std;

int main()
{
	float x, y, z;
	cin >> x >> y >> z;

	if (x < y)
	{
		if (x < z)
		{
			if (y < z)
				cout << x << " " << y << " " << z;
			else
				cout << x << " " << z << " " << y;
		}
		else
				cout << z << " " << x << " " << y;
	}
	else
	{
		if (x < z)
				cout << y << " " << x << " " << z;
		else
		{
			if (y < z)
				cout << y << " " << z << " " << x;
			else
				cout << z << " " << y << " " << x;
		}
	}
}


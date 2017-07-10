#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	setlocale(0, "");
	int x, y, z;
	cout << "X= ";
	cin >> x;
	cout << "Y= ";
	cin >> y;
	z = x;
	for (int f = 1; f < y; f++)
	{
		z = z*x;
	}
	cout << z;
	system("pause");
	return 0;
}
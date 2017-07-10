#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	setlocale(0, "");
	long long i, s = 0;
	cout << "i= ";
	cin >> i;
	for (int f = 0; f <= i; f++)
		s = s + f;
	cout << s << '\n';
	system("pause");
	return 0;
}
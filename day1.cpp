#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	 <int> v;
	int store = n;
	while (n != 0)
	{
		store = n % 2;
		cout << store;
		n = n / 2;
	}
	if (n == 0)
	{
		cout << 0;
	}
	return 0;
}
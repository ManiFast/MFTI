#include <iostream>
using namespace std;


int main()
{
	int s, n = 1;
	cin >> s;
	while (s < 208)
	{
		s = s + 20;
		n = n * 2;
	}
	cout << n << endl;


	system("pause");
	return 0;
}
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	int64_t x;
	int64_t m1;
	int64_t m2;

	cin >> x;

	m1 = x; // 3
	m2 = x; // 3

	while (x != 0)
	{
		if (x == m1)
		{
			// nothing
		}
		else if (x > m1)
		{
			m2 = m1;
			m1 = x;
		}
		else if (x > m2)
		{
			m2 = x;
		}

		cin >> x;
	}

	Sleep(1000);
	cout << endl << "Finding";
	Sleep(300);
	cout << ".";
	Sleep(300);
	cout << ".";
	Sleep(300);
	cout << ".";

	cout << endl << "\033[4m" << m1 << " " << m2 << "\033[0m" << endl << endl;

	system("pause");
	return 0;
}
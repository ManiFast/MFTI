#include <iostream>

int main()
{
	using namespace std;

	up:
	bool is_prime = true;
	int a, d;
	cin >> a;

	for (int d = 2; d <= 2; d+=2)
	{
		if ((a % d) == 0)
		{
			is_prime = false;
			cout << d << endl;
			break;
		}
		if (is_prime)
		{
			cout << "No, " << a << endl;
		}
	}

	goto up;

	return 0;
}
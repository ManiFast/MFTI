#include <iostream>
using namespace std;

int main()
{
	int n;
	// Ограничение зоны поиска
	cin >> n;
	int count_of_idial_numbers = 0;

	for (int x = 1; x <= n; x++)
	{
		int sum_of_divisors = 0;
		
		// Генерация всевохможных делителей
		for (int d = 1; d <= x / 2; d++)
		{
			// Проверка что это дейстыительно делитель
			if (x % d == 0)
			{
				sum_of_divisors += d;
			}
		}
		// Если итоговоя сумма равнa x, то оно совершенное
		if (x == sum_of_divisors)
		{
			cout << "\t" << x << endl;
			count_of_idial_numbers++;
		}
	}

	cout << "Number of idial numbers: " << count_of_idial_numbers << endl;

	system("pause");
	return 0;
}
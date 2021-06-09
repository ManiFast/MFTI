#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	const int SIZE = 10;
	const int SIZE2 = 9;
	int arrA[SIZE]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arrC[SIZE2]{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	for (int i = 0; i < SIZE; i++)
	{
		cout << arrA[i] << " ";
	}

	cout << endl;

	for (int i = 0; i < SIZE2; i++)
	{
		cout << arrC[i] << " ";
	}

	cout << endl << endl;

	// Инверсия - Inversion
	// New arr with spaces
	int arrB[SIZE]{};
	for (int i = 0, j = 9; i < SIZE; i++, j--)
	{
		arrB[j] = arrA[i];
	}

	for (int i = 0; i < SIZE; i++)
	{
		cout << arrB[i] << " ";
	}

	cout << endl;

	//----------

	int arrC2[SIZE2]{};
	for (int i = 0, j = 8; i < SIZE; i++, j--)
	{
		arrC2[j] = arrC[i];
	}

	for (int i = 0; i < SIZE2; i++)
	{
		cout << arrC2[i] << " ";
	}


	cout << endl << endl;

	system("pause");
	return 0;
}
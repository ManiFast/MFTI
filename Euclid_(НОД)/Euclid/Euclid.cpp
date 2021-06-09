#include <iostream>
using namespace std;

int main()
{
    int64_t a;
    int64_t b;

    cout << "Input two numbres:" << endl;
    cin >> a >> b;

    while ((a != 0) & (b != 0))
    {
        cout << "DEBAG: " << a << " " << b << endl;

        // Уменьшиние большего числа при помощи меньшего
        if (a > b)
        {
            a %= b;
        }
        else if (a < b)
        {
            b %= a;
        }

        cout << (a + b) << endl;
    }

    return 0;
}
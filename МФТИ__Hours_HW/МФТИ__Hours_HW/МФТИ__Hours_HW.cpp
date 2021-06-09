#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int hou, min;
    int hou1, min1;
    int hou2, min2;
    int dop = 0;
    int result;

    cout << "Сколько время: 00 00" << endl;
    cin >> hou;
    cin >> min;

    cout << "Сколько длится урок: 00 00" << endl;
    cin >> hou1;
    cin >> min1;

    min2 = min + min1;

    if (min2 > 59)
    {
        min2 = min2 - 60;
        dop++;
    }

    hou2 = hou + hou1;

    if (dop == 1)
    {
        hou2++;
    }

    if (hou2 > 23)
    {
        hou2 = hou - 24;
    }

    cout << hou2 << ":" << min2 << endl;


    return 0;
}
#include <iostream>
#include <string>
#include <Windows.h>

void four_number(int lucky_numbers)
{
    std::cout << std::endl;

    for (int d1 = 0; d1 < 10; d1++)
    {
        for (int d2 = 0; d2 < 10; d2++)
        {
            for (int d3 = 0; d3 < 10; d3++)
            {
                for (int d4 = 0; d4 < 10; d4++)
                {
                    if ((d1 + d2) == (d3 + d4))
                    {
                        //std::cout << d1 << d2 << d3 << d4 << std::endl;
                        lucky_numbers++;
                    }
                }
            }
        }
    }
    std::cout << std::endl << "All four numbers " << lucky_numbers << std::endl;
}

void six_number(int lucky_numbers)
{
    std::cout << std::endl;

    for (int d1 = 0; d1 < 10; d1++)
    {
        for (int d2 = 0; d2 < 10; d2++)
        {
            for (int d3 = 0; d3 < 10; d3++)
            {
                for (int d4 = 0; d4 < 10; d4++)
                {
                    for (int d5 = 0; d5 < 10; d5++)
                    {
                        for (int d6 = 0; d6 < 10; d6++)
                        {
                            if ((d1 + d2 + d3) == (d4 + d5 + d6))
                            {
                                //std::cout << d1 << d2 << d3 << d4 << d5 << d6 << std::endl;
                                lucky_numbers++;
                            }
                        }
                    }
                }
            }
        }
    }
    std::cout << std::endl << "All six numbers " << lucky_numbers << std::endl;
}

void eight_number(int lucky_numbers)
{
    std::cout << std::endl;

    for (int d1 = 0; d1 < 10; d1++)
    {
        for (int d2 = 0; d2 < 10; d2++)
        {
            for (int d3 = 0; d3 < 10; d3++)
            {
                for (int d4 = 0; d4 < 10; d4++)
                {
                    for (int d5 = 0; d5 < 10; d5++)
                    {
                        for (int d6 = 0; d6 < 10; d6++)
                        {
                            for (int d7 = 0; d7 < 10; d7++)
                            {
                                for (int d8 = 0; d8 < 10; d8++)
                                {
                                    if ((d1 + d2 + d3 + d4) == (d5 + d6 + d7 + d8))
                                    {
                                        //std::cout << d1 << d2 << d3 << d4 << d5 << d6 << std::endl;
                                        lucky_numbers++;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    std::cout << std::endl << "All eight numbers " << lucky_numbers << std::endl;
}

int main()
{
    int lucky_numbers = 0;

    std::cout << "Starting";
    Sleep(400);
    std::cout << "\033[31m.";
    Sleep(400);
    std::cout << ".";
    Sleep(400);
    std::cout << ".\033[0m" << std::endl;
    Sleep(400);

    system("cls");

    std::cout << "______________________________" << std::endl;
    for (int i = 0; i < 30; i++)
    {
        Sleep(40);
        char var = 219; // 219 178
        std::cout << "\033[35m" << var;
    }
    std::cout << ">\033[0m" << std::endl;
    std::cout << "100 %" << std::endl;
    Sleep(500);
    system("cls");

    four_number(lucky_numbers);
    std::cout << std::endl;
    six_number(lucky_numbers);
    std::cout << std::endl;
    eight_number(lucky_numbers);

    Sleep(600);

    system("pause");
    return 0;
}
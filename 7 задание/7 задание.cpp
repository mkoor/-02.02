﻿using namespace std;
#include <iostream>
#include <cmath>

int fact(int k)
{
    int j = 1;
    for (int i = 1; i <= k; i++)
    {
        j *= i;
    }
    return j;
}

int main()
{
    setlocale(LC_ALL, "rus");

    int n;
    cout << "Введите любое число. Программа остановится, когда вы введете цифру 0!\n";
    cin >> n;

    while (n != 0)
    {
        int r = fact(n);
        cout << r;
        cout << "\nВведите следующее число: ";
        cin >> n;
    }
    return 0;

}

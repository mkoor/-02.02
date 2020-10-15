#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int x;
    cout << "Введите число: ";
    cin >> x;
    for (int i = 1; i <= 10; i++)
    {
        cout << i << " * " << x << " = " << i * x << "\n";
    }
    cout << endl;
    return 0;

}
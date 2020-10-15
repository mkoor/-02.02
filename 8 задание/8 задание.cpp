#include <iostream>
#include <ctime>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main()
{
	int a[15]{};
	int length = 15;
	srand(time(NULL));
	for (int i = 0; i < 15; i++)
	{
		a[i] = rand() % 10;
		cout << a[i] << " ";
	}
	cout << "\n";

	sort(a, a + 15);
	for (int i = 0; i < length; ++i) cout << a[i] << " ";
}

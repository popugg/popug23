#include <iostream>
using namespace std;

int massive() {
	int mass[10] = {};
	for (int i = 0; i < 10; i++) {
		mass[i] = rand();
		cout << mass[i] << endl;
	}
	return 0;
}

void show() {
	int mass;
	cout << mass << endl;
}

int min(int* a, int n)
{
	int min = 0;
	for (int i = 0; i < n; i++)
	{
		if (i == 0 || a[i] < min) min = a[i];
		return min;
	}
}

int max(int* b, int m)
{
	int max = 0;
	for (int i; i < m; i++)
		if (i == 0 || b[i] > max) max = b[i];
	return max;
}

void SortMass(int* m, int n)
{
	for (int i = n - 1; i >= 1; i--)
		for (int j = 0; j < i; j++)
		{
			if (m[j] > m[j + 1])
			{
				int foo = m[j];
				m[j] = m[j + 1];
				m[j + 1] = foo;
			}
		}
}


int main() {
	int mass;
	massive(mass);

	int m;
	cout << "m="; cin >> m;

	int* b = new int[m];

	cout << "enter " << m << "elements:\n";
	for (int i = 0; i < m; i++)
		cin >> b[i];

	cout << "max = " << Max(b, m) << "\n";
	delete[] b;

	srand((int)time(0));
	int n;
	cout << "n = "; cin >> n;

	int* a = new int[n];

	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 9 + 1;
		cout << a[i] << " ";
	}

	cout << "\nmin = " << Min(a, n) << "\n";

	delete[]a;

	std::cout << "bedute n: ";
	int n = 0;
	int* m;
	std::cin >> n;
	m = new int[n];
	srand(time(0));
	for (int i = 0; i < n; i++)
	{
		int x = rand() % 100;
		m[i] = x;
		std::cout << m[i] << ' ';
	}
	std::cout << std::endl;
	system("pause");
	return 0;
}
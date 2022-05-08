//FIX

#include <iostream>
using namespace std;

void Nhap(float[], int&);
void LietKe(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	LietKe(a, n);
	return 0;
}

void Nhap(float a[], int& n)
{
	do
	{
		cout << "Nhap n: ";
		cin >> n;
		if (n < 4)
			cout << "Nhap lai" << endl;
	} while (n < 4);
	
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void LietKe(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		for (int j = 0; j <= n - 1; j++)
			for (int k = 0; k <= n - 1; k++)
				if (i != j && j != k && i != k && a[i] == a[j] + a[k])
					cout << "(" << a[i] << "," << a[j] << "," << a[k] << ")" << endl;
}
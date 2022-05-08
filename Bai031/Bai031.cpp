#include <iostream>
using namespace std;

void Nhap(float[], int&);
void LietKe(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	cout << "\nCap gia tri (x, y) thoa man dieu kien x<=y" << endl;
	LietKe(a, n);
	return 0;
}

void Nhap(float a[], int& n)
{
	do
	{
		cout << "Nhap n: ";
		cin >> n;
		if (n < 3)
			cout << "Nhap lai" << endl;
	} while (n < 3);
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
			if (i != j && a[i] <= a[j])
				cout << "(" << a[i] << ", " << a[j] << ")" << endl;
}
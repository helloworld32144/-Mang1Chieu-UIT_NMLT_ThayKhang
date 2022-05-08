#include <iostream>
using namespace std;

void Nhap(int[], int&);
int HangChuc(int);
int TongGiaTri(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);

	int s = TongGiaTri(a, n);
	cout << "\nTong gia tri co chu so hang chuc la 5: " << s;
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

int HangChuc(int n)
{
	int t = abs(n);
	return (t / 10) % 10;
}

int TongGiaTri(int a[], int n)
{
	int s = 0;
	for (int i = 0; i <= n - 1; i++)
		if (HangChuc(a[i]) == 5)
			s += a[i];
	return s;
}
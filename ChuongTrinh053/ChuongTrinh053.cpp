#include <iostream>
using namespace std;

void Nhap(float[], int&);
int TanSuat(float[], int, float);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	float x;
	cout << "\nNhap x: ";
	cin >> x;
	int kq = TanSuat(a, n, x);
	cout << "\nKet qua la: " << kq;
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

int TanSuat(float a[], int n, float x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			dem++;
	return dem;
}

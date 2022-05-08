#include <iostream>
using namespace std;

void Nhap(float[], int&);
float TongDuong(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);

	float s = TongDuong(a, n);
	cout << "\nTong cac gia tri duong la: " << s;
	return 0;
}

void NhapDuong(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

float Tong(float a[], int n)
{
	float s = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > 0)
			s += a[i];
	return s;
}
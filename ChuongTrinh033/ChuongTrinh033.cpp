#include <iostream>
using namespace std;

void Nhap(float[], int&);
float Tong(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	
	float s = Tong(a, n);
	cout << "\nTong la: " << s;
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

float Tong(float a[], int n)
{
	float s = 0;
	for (int i = 0; i <= n - 1; i++)
		s += a[i];
	return s;
}
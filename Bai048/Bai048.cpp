#include <iostream>
using namespace std;

void Nhap(float[], int&);
float TichDuong(float[], int);
int DemDuong(float[], int);
float TrungBinhNhan(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	float s = TrungBinhNhan(a, n);
	cout << "\nTrung binh nhan cac so duong: " << s;
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

float TichDuong(float a[], int n)
{
	float T = 01;
	for (int i = 0; i < n; i++)
		if (a[i] > 0)
			T = T * a[i];
	return T;
}

int DemDuong(float a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > 0)
			dem++;
	return dem;
}
float TrungBinhNhan(float a[], int n)
{
	float T = TichDuong(a, n);
	int dem = DemDuong(a, n);
	if (dem == 0)
		return 0;
	return pow(T, (float)1 / dem);
}

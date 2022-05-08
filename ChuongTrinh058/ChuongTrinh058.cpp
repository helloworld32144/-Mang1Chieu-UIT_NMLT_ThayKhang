#include <iostream>
using namespace std;

void Nhap(float[], int&);
float LonNhat(float[], int);
int DemLonNhat(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	int kq = DemLonNhat(a, n);
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

float LonNhat(float a[], int n)
{
	float lc = a[0];
	for (int i = 0; i <= n - 1; i++)
		if (a[i] > lc)
			lc = a[i];
	return lc;
}

int DemLonNhat(float a[], int n)
{
	float ln = LonNhat(a, n);
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == ln)
			dem++;
	return dem;
}
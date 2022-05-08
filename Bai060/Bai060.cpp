#include <iostream>
using namespace std;

void Nhap(float[], int&);
int DemGiaTri(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	int kq = DemGiaTri(a, n);
	cout << "\nSo luong hai so trai dau ke nhau la: " << kq;
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

int DemGiaTri(float a[], int n)
{
	if (n <= 1)
		return 0;
	int dem = 0;
	if (a[0] * a[1] < 0)
		dem++;
	for (int i = 1; i <= n - 2; i++)
		if ((a[i] * a[i - 1] < 0) || (a[i] * a[i + 1] < 0))
			dem++;
	if (a[n - 1] * a[n - 2] < 0)
		dem++;
	return dem;
}
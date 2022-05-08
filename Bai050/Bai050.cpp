#include <iostream>
using namespace std;

void Nhap(int[], int&);
int DemChan(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	int kq = DemChan(a, n);
	cout << "\nSo luong gia tri chan: " << kq;
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

int DemChan(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0)
			dem++;
	return dem;
}

#include <iostream>
using namespace std;

void Nhap(int[], int&);
int DemChan(int[], int);
int DemLe(int[], int);
int TuongQuanChanLe(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	if (TuongQuanChanLe(a, n) == -1)
		cout << "\nSo luong so chan nhieu hon so le";
	else if (TuongQuanChanLe(a, n) == 0)
		cout << "\nSo luong so le bang so luong so chan";
	else
		cout << "\nSo luong so le nhieu hon so chan";


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
	for (int i = 0; i <= n - 1; i++)
		if (a[i] % 2 == 0)
			dem++;
	return dem;
}

int DemLe(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] % 2 != 0)
			dem++;
	return dem;
}

int TuongQuanChanLe(int a[], int n)
{
	int x = DemChan(a, n);
	int y = DemLe(a, n);
	if (x > y)
		return -1;
	if (x < y)
		return 1;
	return 0;
}
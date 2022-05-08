#include <iostream>
using namespace std;

void Nhap(int[], int&);
bool ktHoanThien(int);
int DemHoanThien(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	int kq = DemHoanThien(a, n);
	cout << "\nSo luong so hoan thien la: " << kq;
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

bool ktHoanThien(int k)
{
	int s = 0;
	for (int i = 1; i < k; i++)
		if (k % i == 0)
			s = s + i;
	if (s == k)
		return true;
	return false;
}

int DemHoanThien(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (ktHoanThien(a[i]))
			dem++;
	return dem;
}
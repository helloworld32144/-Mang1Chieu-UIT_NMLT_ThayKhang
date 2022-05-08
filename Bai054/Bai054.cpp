#include <iostream>
using namespace std;

void Nhap(int[], int&);
bool ktDoiXung(int);
int DemDoiXung(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	int kq = DemDoiXung(a, n);
	cout << "\nSo luong gia tri doi xung la: " << kq;
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

bool ktDoiXung(int n)
{
	int t = n;
	int dn = 0;
	int dv;
	while (t != 0)
	{
		dv = t % 10;
		dn = dn * 10 + dv;
		t /= 10;
	}
	if (dn == n)
		return true;
	return false;
}

int DemDoiXung(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (ktDoiXung(a[i]))
			dem++;
	return dem;
}

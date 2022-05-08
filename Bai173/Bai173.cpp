#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void XuatCon(int[], int, int, int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	int vt, l;
	do
	{
		cout << "\nNhap do dai mang con: ";
		cin >> l;
		if (l > n || l <= 0)
			cout << "Nhap lai" << endl;
	} while (l > n || l <= 0);
	do
	{
		cout << "Bat dau tu vi tri: ";
		cin >> vt;
		if (vt + l > n)
			cout << "Nhap lai" << endl;
	} while (vt + l > n);
	cout << "\nMang con co do dai " << l << " bat dau tai vi tri " << vt << endl;
	XuatCon(a, n, vt, l);
	return 1;
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

void XuatCon(int a[], int n, int vt, int l)
{
	for (int i = 0; i < l; i++)
		cout << a[vt+i] << setw(8);
}
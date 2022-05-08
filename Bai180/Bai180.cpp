#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
int ktCon(int[], int, int, int);
int DemConTang(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout << "\nSo day con tang la: " << DemConTang(a, n);
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

int ktCon(int a[], int n, int vt, int l)
{
	int flag = 1;
	for (int i = 0; i <= l - 2; i++)
		if (a[vt + i] > a[vt + i + 1])
			flag = 0;
	return flag;
}

int DemConTang(int a[], int n)
{
	int dem = 0;
	for (int l = 2; l <= n; l++)
		for (int vt = 0; vt <= n - l; vt++)
			if (ktCon(a, n, vt, l) == 1)
				dem++;
	return dem;
}
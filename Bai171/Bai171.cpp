#include <iostream>
#include <iomanip>
using namespace std;

void NhapGiam(float[], int&);
void Xuat(float[], int);

int main()
{
	float a[100];
	int n;
	NhapGiam(a, n);
	cout << "\nDay giam dan: ";
	Xuat(a, n);
	return 1;
}


void NhapGiam(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	int i, j;
	for (i = 0; i < n; i++)
	{
		float x;
		cout << "Nhap a[" << i <<"]: ";
		cin >> x;
		for ( j = i - 1; j >= 0 && a[j] < x; j--)
			a[j + 1] = a[j];
		a[j + 1] = x;
	}
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(8);
}
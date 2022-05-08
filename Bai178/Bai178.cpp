#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
int ktCon(int[], int, int, int);
int TongCon(int[], int, int, int);
void LietKe(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	cout << "\nCac mang con tang trong mang ban dau" << endl;
	LietKe(a, n);
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

int TongCon(int a[], int n, int vt, int l)
{
	int s = 0;
	for (int i = 0; i < l; i++)
		s = s + a[vt + i];
	return s;
}

void LietKe(int a[], int n)
{
	for (int l = 1; l <= n; l++)
		for (int vt = 0; vt <= n - l; vt++)
			if (ktCon(a, n, vt, l) == 1)
			{
				for (int i = 0; i < l; i++)
					cout << left << setw(8) << a[vt + i];
				cout << "co tong la: " << TongCon(a, n, vt, l) << endl;

			}
}
#include <iostream>
using namespace std;

void Nhap(float[], int&);
float TrungBinh(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	float kq = TrungBinh(a, n);
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

float TrungBinh(float a[], int n)
{
	float s = 0;
	int dem = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (i != j)
			{
				s = s + abs(a[i] - a[j]);
				dem++;
			}
	if (dem == 0)
		return 0;
	return s / dem;
}

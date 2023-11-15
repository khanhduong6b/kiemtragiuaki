#include "Header.h"
void nhap(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}
int tong(int a[], int n){
	int sum=0;
	for (int i=0;i<n;i++)
	{
		sum+=a[i];
	}
	return sum;
}
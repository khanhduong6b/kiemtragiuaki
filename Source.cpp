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
void ThongTinSinhVien(){
	cout<<"DH52005378 | Hồ Khánh Dương | D20_TH09"
}
#include<iostream>
#define SIZE 100 
using namespace std;

void nhap (int A[], int &n);
void xoaViTriK (int A[], int &n, int k);
void xoaPhanTuXuatHienNhieuHon1Lan (int A[], int &n);
void xuat (int A[], int nA);

int main (){
	int A[SIZE], n;
	nhap (A,n);
	xoaPhanTuXuatHienNhieuHon1Lan(A,n);
	xuat (A,n); 
} 
void nhap (int A[], int &n){
	cin >> n;
	for (int i=0;i<n;i++)
		cin >> A[i]; 
} 
void xoaPhanTuXuatHienNhieuHon1Lan (int A[], int &n){
	for (int i=0;i<n;i++)
	{
		int j=i+1;
		bool co = false; 
		while (j<n) 
		{
			if (A[i]==A[j]) 
			{
				xoaViTriK(A,n,j);
				co = true; 
			}
			else
				j++; 
		}
		if (co==true)
			xoaViTriK (A,n,i);
		else
			i++; 
	} 
} 
void xoaViTriK (int A[], int &n, int k){
	for (int i=k;i<n-1;i++)
	{
		A[i]=A[i+1]; 
	}
	n--;
} 
void xuat (int A[], int nA)
{
	for (int i=0; i<nA;i++)
		cout << A[i] << " "; 
}  

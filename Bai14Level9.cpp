#include<iostream>
#define SIZE 100 
using namespace std;

void nhap (int A[], int &n);
void xoaViTriK (int A[], int &n, int k);
void xoaPhanTuTrungNhau (int A[], int &n);
void xuat (int A[], int n);

int main (){
	int A[SIZE], n;
	nhap (A,n);
	xoaPhanTuTrungNhau(A,n);
	xuat (A,n); 
} 
void nhap (int A[], int &n){
	cin >> n;
	for (int i=0;i<n;i++)
		cin >> A[i]; 
} 
void xoaPhanTuTrungNhau (int A[], int &n){
	for (int i=0;i<n;i++)
	{
		for (int j=i+1;j<n;j++)
		{
			if (A[i]==A[j]) 
			{
				xoaViTriK(A,n,j);
				j--; 
			}
		}
	} 
} 
void xoaViTriK (int A[], int &n, int k){
	for (int i=k;i<n-1;i++)
	{
		A[i]=A[i+1]; 
	}
	n--;
} 
void xuat (int A[], int n)
{
	for (int i=0; i<n;i++)
		cout << A[i] << " "; 
}  

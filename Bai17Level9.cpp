#include<iostream>
#define SIZE 100 
using namespace std;
// dich trai 1 lan 
void nhap (int A[], int &n);
void xuat (int A[], int n); 
void dichTraiPhanTu (int A[], int n);
void xoaViTriK (int A[], int n, int k);
int main (){
	int A[SIZE], n;
	nhap (A,n);
	dichTraiPhanTu (A,n);
	xuat (A,n); 
}	
void nhap (int A[], int &n){
	cin >> n;
	for (int i=0;i<n;i++)
		cin >> A[i]; 
}
void xuat (int A[], int n)
{
	for (int i=0; i<n;i++)
		cout << A[i] << " "; 
} 
void dichTraiPhanTu (int A[], int n){
	int x = A[0];
	xoaViTriK (A,n,0); 
	A[n-1]=x; 
} 
void xoaViTriK (int A[], int n, int k){
	for (int i=k;i<n-1;i++)
	{
		A[i]=A[i+1]; 
	}
} 

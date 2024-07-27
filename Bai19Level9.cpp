#include<iostream>
#define SIZE 100 
using namespace std;
void nhap (int A[], int &n);
int timPhanTuLonThu2 (int A[], int n);
void hoanVi (int &x, int &y);
void xuat (int kq);
int main (){
	int A[SIZE], n;
	nhap (A,n);
	int kq = timPhanTuLonThu2(A,n);
	xuat (kq); 
}  
void nhap (int A[], int &n){
	cin >> n;
	for (int i=0;i<n;i++)
		cin >> A[i]; 
} 
void sapXepPhanTu (int A[], int n){
	for (int i=0;i<n;i++)
	{
		for (int j=i+1;j<n;j++)
		{
			if (A[i]<A[j])
			{
				hoanVi (A[i], A[j]); 
			}
		}
	} 
}  
void hoanVi (int &x, int &y){
	int tam = x;
	x = y;
	y = tam; 
} 
int timPhanTuLonThu2 (int A[], int n){
	sapXepPhanTu (A,n);
	return A[1]; 
} 
void xuat (int kq){
	cout << kq; 
} 


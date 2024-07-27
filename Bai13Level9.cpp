#include<iostream>
#define SIZE 100 
using namespace std;
void nhap (int A[], int &n);
void xoaViTriK (int A[], int &n, int k);
bool laSCP (int x);
void xoaAllSCP (int A[], int &n);
void xuat (int A[], int nA);

int main (){
	int A[SIZE], n;
	nhap (A,n);
	xoaAllSCP(A,n);
	xuat (A,n); 
} 
void nhap (int A[], int &n){
	cin >> n;
	for (int i=0;i<n;i++)
		cin >> A[i]; 
} 
void xoaAllSCP (int A[], int &n){
	for (int i=0;i<n;i++)
	{
		if (laSCP(A[i])==true)
		{
			xoaViTriK(A,n,i);
			i--;
		}
	} 
} 
bool laSCP (int x){
	for (int i=0;i*i<=x;i++)
	{
		if (x==i*i)	
			return true; 
	} 
	return false; 
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
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           

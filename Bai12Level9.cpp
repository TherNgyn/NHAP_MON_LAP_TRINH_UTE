#include<iostream>
#define SIZE 100 
using namespace std;

void nhap (float A[], int &n);
void xoaViTriK (float A[], int &n, int k);
float timMax (float A[], int n);
void xoaMax (float A[], int &n);
void xuat (float A[], int n);

int main (){
	float A[SIZE];
	int n;
	nhap (A, n);
	xoaMax(A,n);
	xuat (A,n); 
	return 0; 
} 
void nhap (float A[], int &n){
	cin >> n;
	for (int i=0;i<n;i++)
		cin >> A[i]; 
} 
float timMax (float A[], int n){
	float max = A[0];  
	for (int i=0;i<n;i++)
	{
		if (A[i]>max)
			{
				max = A[i];	
			} 
	}
	return max; 
} 
void xoaMax (float A[], int &n){
	float max = timMax(A,n); 
	for (int i=0;i<n;i++)
	{
		if (A[i]==max) 
		{
			xoaViTriK (A,n,i);
			i--; 
		}
	}
}
void xoaViTriK (float A[], int &n, int k){
	for (int i=k;i<n-1;i++)
	{
		A[i]=A[i+1]; 
	}
	n--;
} 
void xuat (float A[], int n)
{
	for (int i=0; i<n;i++)
		cout << A[i] << " "; 
} 

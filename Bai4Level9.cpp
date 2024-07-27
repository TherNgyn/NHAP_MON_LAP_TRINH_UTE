#include <iostream>
#include <math.h> 
#define SIZE 100
using namespace std;
void nhap (float A[], int &n);
void lietKeLonHonTTD (float A[], int n, float C[], int &nC);
void xuat (float A[], int n);
int main (){
	float A[SIZE], C[SIZE];
	int n, nC; 
	nhap (A, n);
	lietKeLonHonTTD (A,n, C, nC);
}
void nhap (float A[], int &n){
	cin >> n;
	for (int i=0;i<n;i++)
		cin >> A[i]; 
}  
void lietKeLonHonTTD (float A[], int n, float C[], int &nC){
	nC=0; 
	for (int i=0;i<n-1;i++){
		if (A[i]>abs(A[i+1])) 
		{
			C[nC++] = A[i]; 
		}
	} 
	xuat (C,nC); 
} 
void xuat (float A[], int n)
{
	for (int i=0; i<n;i++)
		cout << A[i] << " "; 
}   

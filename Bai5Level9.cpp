#include <iostream>
#define SIZE 100
using namespace std;

void nhap (float A[], int &n);
void lietKePTLanCanTraiDau (float A[], int n, float C[], int &nC);
void xuat (float A[], int n);

int main (){
	float A[SIZE], C[SIZE];
	int n, nC; 
	nhap (A,n);
	lietKePTLanCanTraiDau (A,n,C,nC);
}
void nhap (float A[], int &n){
	cin >> n;
	for (int i=0;i<n;i++)
		cin >> A[i]; 
}  
void lietKePTLanCanTraiDau (float A[], int n, float C[], int &nC){
	nC = 0; 
	for (int i=1;i<n-1;i++)
	{
		if ((A[i-1]*A[i]<0)||(A[i]*A[i+1]<0))
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

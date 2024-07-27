#include <iostream>
#define SIZE 100
using namespace std;

void nhap (float A[], int &n);
void phanTuXuatHienCaHaiDay (float A[], int m, float B[], int n, float C[], int &nC);
void xuat (float C[], int nC);

int main(){
	float A[SIZE], B[SIZE], C[SIZE]; 
	int m,n,nC; 
	nhap (A, m);
	nhap (B, n); 
	phanTuXuatHienCaHaiDay (A,m,B,n,C,nC);
	xuat (C,nC);
}
void nhap (float A[], int &n){
	cin >> n;
	for (int i=0;i<n;i++)
		cin >> A[i]; 
}  
bool giongNhau (float A[], int m, float x){
	for (int i=0;i<m;i++)
	{
        	if (A[i]==x)
        		return true;
	}
	return false; 
}       
void phanTuXuatHienCaHaiDay (float A[], int m, float B[], int n, float C[], int &nC){
	int iA = 0; 
	while (iA<m)
	{
		if (giongNhau(B, n, A[iA])==true)
		{
			C[nC++] =  A[iA]; 
		}	
	iA++; 
	} 
}
void xuat (float C[], int nC)
{
	for (int i=0; i<nC;i++)
		cout << C[i] << " "; 
}  

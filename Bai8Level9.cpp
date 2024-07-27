#include <iostream>
#define SIZE 100
using namespace std;

void nhap(int A[], int &nA);
bool giongNhau (int A[], int n, int x);
int soLanXuatHien (int A[], int n, int x);
void lietKeTanSuat (int A[], int nA, int B[], int C[], int &nB);
void xuat (int B[],int C[], int nB);

int main (){
	int A[SIZE], B[SIZE], C[SIZE], nA, nB;
	nhap (A, nA);
	lietKeTanSuat (A,nA,B,C,nB);
	xuat (B,C,nB);
}	
void nhap(int A[], int &nA){
	cin >> nA;
	for (int i=0; i<nA; i++)
		cin >> A[i]; 
}
bool giongNhau (int A[], int n, int x){
	for (int i=0;i<n;i++)
		if (A[i]==x)
			return true; 
	return false; 
} 
int soLanXuatHien (int A[], int n, int x){
	int dem = 0; 
	for (int i=0;i<n;i++)
		if (A[i]==x)
			dem++; 
	return dem; 
} 
void lietKeTanSuat (int A[], int nA, int B[], int C[], int &nB){
	nB=0; 
	for (int i=0;i<nA;i++)
	{
		if (giongNhau(B,nB,A[i])==false)
		{
			B[nB++] = A[i]; 
		}	
	}
	for (int i=0;i<nB;i++)
	{
		C[i] = soLanXuatHien (A,nA,B[i]); 
	} 
} 
void xuat (int B[],int C[], int nB){
	for (int i=0;i<nB;i++)
		cout << "Phan tu " << B[i] << " xuat hien " << C[i] << " lan" << endl; 
} 

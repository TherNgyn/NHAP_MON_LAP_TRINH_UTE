#include<iostream>
#define SIZE 100 
using namespace std;

void nhap (int A[], int &n);
void ghepMang(int A[], int nA, int B[], int nB, int C[], int &nC);
void xuat (int A[], int n);

int main (){
	int A[SIZE], B[SIZE], C[2*SIZE];
	int nA, nB, nC; 
	nhap (A, nA);
	nhap(B, nB);
	ghepMang (A, nA, B, nB, C, nC); 
	xuat (C, nC);
	return 0; 
} 
void nhap (int A[], int &n){
	cin >> n;
	for (int i=0;i<n;i++)
		cin >> A[i]; 
} 
void ghepMang(int A[], int nA, int B[], int nB, int C[], int &nC){
	int iA=0;
	int iB=0;
	nC=0;
	while (iA<nA && iB<nB)
	{
		C[nC++] = A [iA++];
		C[nC++] = B [iB++]; 
	} 
	while (iA<nA)
	{
		C[nC++] = A[iA++];
	}
	while (iB<nB)
	{
		C[nC++] = B[iB++];
	}
} 
void xuat (int A[], int n)
{
	for (int i=0; i<n;i++)
		cout << A[i] << " "; 
} 

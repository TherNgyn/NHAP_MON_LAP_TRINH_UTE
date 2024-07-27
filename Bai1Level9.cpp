#include <iostream>
#define SIZE 100
using namespace std;

void nhap (int A[], int &n);
void mangB (int A[], int nA, int B[], int &nB);
void mangC (int A[], int nA, int C[], int &nC);
void xuat (int B[], int nB, int C[], int nC);

int main (){
	int A[SIZE], B[SIZE], C[SIZE], nA, nB, nC;
	nhap (A, nA);
	mangB (A,nA,B,nB);
	mangC(A,nA,C,nC); 
	xuat (B,nB,C,nC); 
} 
void nhap (int A[], int &n){
	cin >> n;
	for (int i=0;i<n;i++)
		cin >> A[i]; 
} 
void mangB (int A[], int nA, int B[], int &nB){
	nB = 0;
	int iA = 0; 
	while (iA<nA)
	{
		if (A[iA]>=0)
		{
			B[nB++] = A[iA];	
		} 
	iA++; 
	} 
} 
void mangC (int A[], int nA, int C[], int &nC){
	nC = 0;
	int iA = 0; 
	while (iA<nA)
	{
		if (A[iA]<0)
		{
			C[nC++] = A[iA];	
		} 
	iA++; 
	} 
} 
void xuat (int B[], int nB, int C[], int nC)
{
	cout << "Mang B: "; 
	for (int i=0; i<nB;i++)
		cout << B[i] << " ";
	cout << "Mang C: "; 
	for (int i=0;i<nC;i++)
		cout << C[i] <<" "; 
} 


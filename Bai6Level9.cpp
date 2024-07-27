#include <iostream>
#define SIZE 100
using namespace std;

void nhap(float A[], int &n);
float tinhTongCucTri (float A[], int n);
void xuat (float kq);

int main (){
	float A[SIZE];
	int n;
	nhap(A, n);
	float kq = tinhTongCucTri (A,n);
	xuat (kq); 
} 
void nhap(float A[], int &n){
	cin >> n;
	for (int i=0; i<n; i++)
		cin >> A[i]; 
} 
float tinhTongCucTri (float A[], int n){
	float tong = 0.0;	
	for(int i=1; i<n-1;i++)
	{
		if ((A[i]<A[i-1] && A[i]<A[i+1]) || (A[i]>A[i-1]&&A[i]>A[i+1]))
		{
			tong = tong + A[i]; 
		}
	} 
	return tong; 
} 
void xuat (float kq){
	cout << kq; 
} 

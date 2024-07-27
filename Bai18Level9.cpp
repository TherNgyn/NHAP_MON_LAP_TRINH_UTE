#include<iostream>
#define SIZE 100 
using namespace std;
// dich trai 1 lan 
void nhap (int A[], int &n, int &k);
void xuat (int A[], int n); 
void dichPhaiKLan (int A[], int n, int k);

int main (){
	int A[SIZE], n, k;
	nhap (A,n,k);
	dichPhaiKLan (A,n,k);
	xuat (A,n); 
}	
void nhap (int A[], int &n, int &k){
	cin >> n;
	for (int i=0;i<n;i++)
		cin >> A[i]; 
	cin >> k; 
}
void xuat (int A[], int n)
{
	for (int i=0; i<n;i++)
		cout << A[i] << " "; 
}  
void dichPhaiKLan (int A[], int n, int k){
	for (int i=1;i<=k;i++){ 
		int x = A[n-1];
		for (int i = n-1;i>0;i--)
		{
			A[i]=A[i-1];	
		} 
		A[0]=x; 
	}
} 


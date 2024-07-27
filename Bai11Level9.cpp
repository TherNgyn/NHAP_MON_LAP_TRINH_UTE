#include <iostream>
#define SIZE 100
using namespace std;

void nhap (float A[], int &n);
bool kiemTraTatCaAThuocB (float A[], int m, float B[], int n);
void xuat (bool kq);

int main (){
	float A[SIZE], B[SIZE];
	int m, n, nC;
	nhap (A, m);
	nhap (B, n);
	bool kq = kiemTraTatCaAThuocB (A,m,B,m);
	xuat (kq); 
} 
void nhap (float A[], int &n){
	cin >> n;
	for (int i=0;i<n;i++)
		cin >> A[i]; 
} 
bool kiemTraTatCaAThuocB (float A[], int m, float B[], int n){
	int dem = 0; 
	for (int i=0; i<m;i++)
	{
		for (int j=0;j<n;j++)
		{
			if (A[i]==B[j])
				dem++; 
		} 
	} 
	if (dem==m) 
		return true; 
	return false; 
}
void xuat (bool kq){
	if (kq==true)
		cout << "Tat ca phan tu cua A thuoc B";
	else
		cout << "Tat ca phan tu cua A khong thuoc B"; 
} 

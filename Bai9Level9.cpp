#include <iostream>
#define SIZE 100
using namespace std;

void nhap (float A[], int &n);
int demPTXuatHien1Trong2Mang (float A[], int m, float B[], int n);
void xuat (int kq);

int main (){
	float A[SIZE], B[SIZE], C[SIZE];
	int m, n, nC;
	nhap (A, m);
	nhap (B, n); 
	int kq = demPTXuatHien1Trong2Mang (A,m,B,n);
	xuat (kq);
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
int phanTuDayAKhongThuocDayB (float A[], int m, float B[], int n){
	int dem = 0;
	for (int i=0;i<m;i++){
		if (giongNhau(B,n,A[i])==false)
			dem++; 
	} 
	return dem; 
}
int demPTXuatHien1Trong2Mang (float A[], int m, float B[], int n){
	int dem1 = phanTuDayAKhongThuocDayB (A,m,B,n);
	int dem2 = phanTuDayAKhongThuocDayB (B,n,A,m);
	return dem1 + dem2;
}
void xuat (int kq) {
	cout << kq; 
} 

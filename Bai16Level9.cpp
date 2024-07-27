#include<iostream>
#define SIZE 100 
using namespace std;

void nhap (int A[], int &n);
void hoanVi (int &x, int &y);
void xepMang (int A[], int n);
void xuat (int A[], int n);

int main (){
	int A[SIZE], n;
	nhap (A,n);
	xepMang(A,n);
	xuat (A,n); 
} 
void nhap (int A[], int &n){
	cin >> n;
	for (int i=0;i<n;i++)
		cin >> A[i]; 
}
void xuat (int A[], int n)
{
	for (int i=0; i<n;i++)
		cout << A[i] << " "; 
} 
void duaChanVeDau (int A[], int vt)
{
	int tam = A[vt];
	for (int i=vt;i>0;i--)
	{
		A[i] = A[i-1];	
	} 
	A[0]=tam; 
} 
void doi0 (int A[], int vt, int vtchancuoicung)
{
	for (int i=vt;i>vtchancuoicung;i--)
	{
		A[i]=A[i-1];	
	}
	A[vtchancuoicung]=0;	
} 
void xepMang (int A[], int n){
	int i; 
	int vtchancuoicung = 0; 
	for (int i=0;i<n;i++)
	{
		if (A[i]%2==0&&A[i]!=0)
		{
			duaChanVeDau (A,i);	
		}
	} 
	for (i=0;i<n;i++)
	{
		if (A[i]%2!=0)
		{
			vtchancuoicung = i;
			break;  
		}
	} 
	for (i;i<n;i++)
	{
		if (A[i]==0)
		{
			doi0 (A,i,vtchancuoicung);	
		}
	} 
} 

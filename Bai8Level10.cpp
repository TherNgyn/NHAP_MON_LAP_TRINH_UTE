#include <iostream>
#include <string.h>
using namespace std;

void nhap(char S[], char C[]);
bool kiemTraChuoiCon(char S[], char C[]);
void xuat(bool kq);
int main() {
    char S[200], C[200];
    nhap(S, C);
    bool kq = kiemTraChuoiCon(S, C);
    xuat(kq);
}
void nhap(char S[], char C[]) {
    gets(S); 
    gets(C); 
}
bool kiemTraChuoiCon(char S[], char C[]) {
    int n = 0;
    int m = 0;
    int len = strlen(C);
    while (S[n]!= '\0'){
        if (S[n]==C[m]){
            while (S[n] == C[m] && S[n] != '\0') {
                n++;
                m++;
            }
            if (m == len && (S[n] ==' '|| S[n] == '\0')) {
                return true;
            }
        } else {
            while (S[n] != ' ') {
                n++;
                if (S[n] == '\0')
                    break;
            }
        }
        n++;
        m = 0;
    }
    return false;
}
void xuat(bool kq) {
    if (kq)
        cout << "Chuoi la chuoi con";
    else
        cout << "Chuoi khong la chuoi con";
}


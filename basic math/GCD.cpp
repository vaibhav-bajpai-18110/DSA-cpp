#include <bits/stdc++.h>
using namespace std;
void gcd(int n1,int n2){
    int m=-1;
    for(int i = max(n1,n2);i>=1;i--){
        if(n1%i==0 && n2%i==0){
            m = max(m,i);
        }
    }
    cout<<m;
}


void GCD(int a,int b){
    while(a>0 && b>0){
        if(a>b) a = a%b;
        else b = b%a;
    }
    if(a==0) cout<<b;
    else cout<<a;
}
int main() {
    gcd(20,30);
    cout<<endl;
    GCD(20,30);
    return 0;
}
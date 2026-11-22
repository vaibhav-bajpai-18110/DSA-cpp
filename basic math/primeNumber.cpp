#include <bits/stdc++.h>
using namespace std;

void primeNumber(int n){
    int c = 0;
    for(int i = 1;i<=sqrt(n);i++){
        if(n%i==0){
            c++;
            if(n/i != i)
                c++;
        }
        
    }
    if(c==2) cout<<"Yes, It's a prime number";
    else cout<<"No. it's not a prime number";
}

int main() {
    int n = 12;
    primeNumber(n);
    return 0;
}
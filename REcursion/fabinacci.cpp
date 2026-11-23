#include <bits/stdc++.h>
using namespace std;

int fabi(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return fabi(n-1)+fabi(n-2);
}
int main() {
    cout<<fabi(7);
    return 0;
}
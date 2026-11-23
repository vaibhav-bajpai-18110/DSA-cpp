#include <bits/stdc++.h>
using namespace std;
void printSum1(int n, int sum){
    if(n<1){
        cout<<sum;
        return;
    }
    printSum1(n-1,sum+n);
}

int printSum2(int n){
    if(n == 1) return 1;
    return n+printSum2(n-1);
}
int main() {
    printSum1(5,0);
    cout<<endl;
    cout<<printSum2(5);
    return 0;
}
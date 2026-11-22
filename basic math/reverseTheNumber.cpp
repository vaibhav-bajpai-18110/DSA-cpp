#include <bits/stdc++.h>
using namespace std;
void reverseTheNum(int n){
    int rev = 0;
    while(n){
        int a = n%10;
        n/=10;
        rev = rev*10+a;
    }
    cout<<rev;
}
int main() {
    int n = 564748;
    reverseTheNum(n);
    return 0;
}
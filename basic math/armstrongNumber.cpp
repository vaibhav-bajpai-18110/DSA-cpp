#include <bits/stdc++.h>
using namespace std;



int armstrongNum(int n){
    int ans = 0;
    while(n){
        int a = n%10;
        ans += a*a*a;
        n/=10;
    }
    return ans;
}



int main() {
    int n = 371;
    if(n == armstrongNum(n))
        cout<<"Yes, it's an armstrong number";
    else
        cout<<"No, it's not an armstrong number";
    return 0;
}
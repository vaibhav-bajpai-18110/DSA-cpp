#include <bits/stdc++.h>
using namespace std;
int reverse(int n){
    int rev = 0;
    while(n){
        int a=n%10;
        n/=10;
        rev=rev*10+a;
    }
    return rev;
}
int main() {
    int a=1234321;
    if(a == reverse(a)) 
        cout<<"Yes, It is a palindrome";
    else
        cout<<"No, it's not a palindrome" ;
    return 0;
}
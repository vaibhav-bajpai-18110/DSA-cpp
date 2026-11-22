#include <bits/stdc++.h>
using namespace std;


//basic divide reduce and count the digit
void countDigit(int n){
    int c=0;
    while(n){
        n/=10;
        c++;
    }
    cout<<c;
}



//shortcut by using logrethemic funtion remember to include math header or bits/stdc++.h
void countByLog(int n){
    int a = log10(n)+1;
    cout<<a;
}


int main() {
    int n = 156;
    countDigit(n);
    cout<<endl;
    countByLog(n);
    return 0;
}
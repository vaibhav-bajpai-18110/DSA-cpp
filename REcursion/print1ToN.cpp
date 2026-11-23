#include <bits/stdc++.h>
using namespace std;
void printNum(int i,int n){
    if(i>n) return;
    cout<<i<<" ";
    printNum(i+1,n);
}
int main() {
    printNum(1,5);
    return 0;
}
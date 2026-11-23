#include <bits/stdc++.h>
using namespace std;
int c=0;
void printName(){
    if(c==5) return;
    cout<<"Vaibhav Bajpai"<<endl;
    c++;
    printName();
}
int main() {
    printName();
    return 0;
}
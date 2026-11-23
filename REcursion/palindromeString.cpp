#include <bits/stdc++.h>
using namespace std;
bool palin(int i,string s){
    if(i >= s.size()/2) return true;
    if(s[i] != s[s.size()-1-i]) return false;
    return palin(i+1,s);
}
int main() {
    string s = "MADAM";
    cout<<palin(0,s);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 7;
    int arr[n] = {1,1,2,3,3,4,4};
    
    int xo = 0;
    for(int i = 0;i<n;i++){
        xo = xo^arr[i];
    }
    cout<<xo;
}
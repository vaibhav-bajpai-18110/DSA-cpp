#include <bits/stdc++.h>
using namespace std;

bool check(int arr[],int n){
    bool t = true;
    for(int i = 0;i<n-1;i++){
        if(!(arr[i]<=arr[i+1])){
            t = false;
            return t; 
        }
    }
}


int main() {
    int n = 7;
    int arr[n]={1,2,3,9,5,6,7};
    cout<<check(arr,n);
    return 0;
}
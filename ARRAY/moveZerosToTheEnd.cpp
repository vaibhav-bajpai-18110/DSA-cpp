#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 8;
    int arr[n] = {1,0,2,0,3,0,4,0};
    int l = 0;;
    int r = n-1;
    while(l<r){
        if(arr[l] == 0 && arr[r]!=0){
            swap(arr[l],arr[r]);
            l++;
            r--;
        }
        if(arr[l]!=0) l++;
        if(arr[r]==0) r--;
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
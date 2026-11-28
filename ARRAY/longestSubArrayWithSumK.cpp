#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 9;
    int arr[n] = {1,2,3,1,1,1,3,4,5};
    int k = 3;
    int l = 0;
    int r = 0;
    int maxLen = 0;
    int sum = arr[0];
    while(r<n){
        while(l <= r && sum>k){
            sum-=arr[l];
            l++;
        }
        if(sum == k ){
            maxLen = max(maxLen,r-l+1);
        }
        r++;
        if(r<n) sum+=arr[r];
    }
    cout<<maxLen;
}
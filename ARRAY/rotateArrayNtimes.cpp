#include<bits/stdc++.h>
using namespace std;
void rotate(int arr[], int n, int k){
    // k = k % n;
    for(int i=0; i<k; i++){
        int t = arr[n-1];
        for(int j=n-1; j>0; j--){
            arr[j] = arr[j-1];
        }
        arr[0] = t;
    }
}
int main(){
    int n = 5;
    int arr[5] = {1,2,3,4,5};
    int k = 3;
    rotate(arr,n,k);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
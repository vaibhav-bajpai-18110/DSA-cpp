#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 5;
    int arr[n] = {1,2,3,4,5};
    for(int i = 0;i<n;i++){
        arr[i] = arr[i+1];
    }
    n--;
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
#include<bits/stdc++.h>
using namespace std;
void insertAtspeci(int arr[],int &n,int key,int pos){
    n++;
    for(int i = n-1;i>pos;i--){
        arr[i] = arr[i-1];
    }
    arr[pos] = key;
}
int main(){
    int n = 5;
    int arr[n] = {1,2,3,4,5};
    insertAtspeci(arr,n,8,3);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
#include<bits/stdc++.h>
using namespace std;
void insertAtbeg(int arr[],int &n,int key){
    n++;
    for(int i=n-1;i>=0;i--){
        arr[i] = arr[i-1];
    }
    arr[0] = key;
}
int main(){
    int n = 5;
    int arr[n] = {10,20,30,40,50};
    insertAtbeg(arr,n,99);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
#include<bits/stdc++.h>
using namespace std;
void insertAtEnd(int arr[],int &n,int val){
    n++;
    arr[n-1]=val;
}

int main(){
    int n = 5;
    int arr[n]={1,2,3,4,5};
    insertAtEnd(arr,n,10);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

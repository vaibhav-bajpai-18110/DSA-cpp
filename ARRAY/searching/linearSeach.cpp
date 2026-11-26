#include<bits/stdc++.h>
using namespace std;

void linearSeach(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"given ele fount at ind: "<<i;
            return;
        }
    }
    cout<<"ele not found";
}

int main(){
    int n = 9;
    int arr[n]={2,4,2,3,5,3,56,6,4};
    linearSeach(arr,n,56);
}
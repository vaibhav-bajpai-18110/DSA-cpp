#include<bits/stdc++.h>
using namespace std;




void insertionSort(int arr[],int n){
    for(int i = 0;i<n;i++){
        int j = i;
        while(j>0 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
}




void print(int arr[],int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n = 6;
    int arr[n] = {12,46,24,20,52,9};
    insertionSort(arr,n);
    print(arr,n);
}
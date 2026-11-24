#include<bits/stdc++.h>
using namespace std;

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}



void selectSort(int arr[],int n){
    for(int i = 0;i<n-1;i++){
        int min = i;

        for(int j=i;j<n;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }

        print(arr,n);
        swap(arr[i],arr[min]);
    }
}


// 13 46 24 52 20 9 
// 9 46 24 52 20 13 
// 9 13 24 52 20 46 
// 9 13 20 52 24 46 
// 9 13 20 24 52 46 
// 9 13 20 24 46 52 



int main(){
    int n = 6;
    int arr[n] = {13,46,24,52,20,9};
    selectSort(arr,n);
    print(arr,n);
}
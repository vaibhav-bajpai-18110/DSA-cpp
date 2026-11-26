#include<bits/stdc++.h>
using namespace std;

void sort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
}



//Brute Force Solution
void largest(int arr[],int n){
    sort(arr,n);
    cout<<"Largest ele of arr is: "<<arr[n-1];
}




//optimized solution
void findLargest(int arr[],int n){
    int maxi = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i] > maxi){
            maxi = arr[i];
        }
    }
    cout<<"Largest ele of an arr is: "<<maxi;
    
}



int main(){
    int n = 6;
    int arr[n] = {3,2,1,5,9,0};
    findLargest(arr,n);
    cout<<endl;
    largest(arr,n);
}
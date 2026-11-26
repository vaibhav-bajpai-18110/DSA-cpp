#include <bits/stdc++.h>
using namespace std;

void sort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
}

//brute force solution
void second(int arr[],int n){
    sort(arr,n);
    int largest = arr[n-1];
    for(int i = n-1 ; i>=0;i--){
        if(arr[i]!=largest){
            cout<<"second largest number is: "<<arr[i];
            return;
        }
    }
    
}



// optimized solution
void seconfLargest(int arr[],int n){
    int first = arr[0];
    for(int i = 1;i<n;i++){
        if(first<arr[i]) first = arr[i];
    }

    int second = INT_MIN;
    for(int i=0;i<n;i++){
        if (arr[i]>second  &&  arr[i]!=first){
            second = arr[i];
        }
    }
    cout<<"second largest value is: "<<second;


}

int main() {
    int n = 7;
    int arr[n]={2,3,1,4,5,3,6};
    seconfLargest(arr,n);
    cout<<endl;
    second(arr,n);

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
void binarySearch(int arr[],int n,int key){
    int l = 0;
    int h = n-1;
    while(l<=h){
        int mid = (l+h)/2;
        if (key == arr[mid]){
            cout<<"ele fount at ind: "<<mid;
            return;
        }
        else if(key<arr[mid]){
            h = mid-1;
        }
        else{
            l=mid+1;
        }
    }
}
int main(){
    int n = 7;
    int arr[n] ={1,2,3,5,6,7,8,9};
    binarySearch(arr,n,6);
}
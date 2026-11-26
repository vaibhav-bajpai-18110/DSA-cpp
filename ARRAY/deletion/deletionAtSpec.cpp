#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 5;
    int arr[n] = {10,20,30,40,50};
    int key = 3;
    for(int i = key ;i<n;i++){
        arr[i]= arr[i+1];
    }
    n--;
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
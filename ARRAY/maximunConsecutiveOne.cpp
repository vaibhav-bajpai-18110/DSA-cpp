#include<bits/stdc++.h>
using namespace std;
 
int count(int arr[],int n){
    int m = 0;
    int c = 0;
    for(int i=0;i<n;i++){
        if(arr[i] == 1){
            c++;
            m = max(c,m);
        }
        else{
            c = 0;
        }
    }
    return m;
}
int main(){
    int n=9;
    int arr[n]={1,1,0,1,1,1,0,1,1};
    cout<<count(arr,n);
}
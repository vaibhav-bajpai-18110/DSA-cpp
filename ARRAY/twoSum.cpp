#include<bits/stdc++.h>
using namespace std;

//brute solution
void brute(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        for(int j= i;j<n;j++){
            if(arr[i]+arr[j] == target) {
                cout<<i<<" "<<j;
                return;
            }
        }
    }
}


//optimised solution
void opti(int arr[],int n,int target){
    map<int,int> mpp;
    for(int i = 0;i<n;i++){
        int a = arr[i];
        int more = target - a ;
        if(mpp.find(more) != mpp.end()){
            cout<<i<<" "<<mpp[more]; 
            return;
        }
        mpp[a] = i;
    }
}


int main(){
    int n = 5;
    int arr[n] = {2,6,5,8,11};
    int targert = 14;
    opti(arr,n,targert);

    
    return 0;
}
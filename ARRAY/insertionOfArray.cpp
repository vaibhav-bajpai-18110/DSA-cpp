#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr={1,2,3,3,4,5,6,7};
    vector<int> arr2={3,4,5,6,6,7,8};
    int l=0;
    int r=0;
    vector<int> arr3;
    while(l<=arr.size() && r<=arr2.size()){
        if(arr[l] == arr[r]){
            arr3.push_back(arr[l]);
            l++;
            r++;
        }
        if(arr[l]<arr[r]){
            l++;
        }else{
            r++;
        }
    }
    for(int i=0;i<arr3.size();i++){
        cout<<arr3[i]<<" ";
    }

}
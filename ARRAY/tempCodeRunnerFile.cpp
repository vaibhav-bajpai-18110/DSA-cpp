#include<bits/stdc++.h>
using namespace std;


vector<int> fun(int arr[],int n,int target){
    vector<int> nums;
    int left = 0,right = 1;
    int sum = 0;
    while(right<n && left != right){
        if (arr[left]+arr[right] == sum){
            nums.push_back(left);
            nums.push_back(right);
        }
    }
    return nums;
}
int main(){
    int n = 5;
    int arr[n] = {2,6,5,8,11};
    int targert = 14;

    vector<int> v = fun(arr,n,targert);
    for(int i:v) cout<<i<<" ";

    
    return 0;
}
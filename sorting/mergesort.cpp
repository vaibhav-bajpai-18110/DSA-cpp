#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr,int low,int mid,int high){
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    while(left <= mid && right<=high){
        if(arr[left]<arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid) {
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    int k = low;
    for (int i = 0; i < temp.size(); i++) {
        arr[k] = temp[i];
        k++;
    }

}
void mergesort(vector<int> &v,int low ,int high){
    if(low >= high) return;
    int mid = (low + high ) / 2;
    mergesort(v,low,mid);
    mergesort(v,mid+1,high);
    merge(v,low,mid,high);
}
int main() {
    vector<int> v = {3,1,2,4,1,5,2,6,4};
    mergesort(v,0,v.size()-1);
    for(int i:v){
        cout<<i<<" ";
    }
    return 0;
}
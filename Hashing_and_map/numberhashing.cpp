#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[7] = {1,2,1,3,5,3,2};
    //prestoring
    int freq[12] = {0};
    int target = 2;
    for(int i = 0;i<7;i++){
        if(arr[i] == target){
            // fetching
            freq[arr[i]] += 1;
        }
    }
    cout<<freq[target];
    return 0;
}
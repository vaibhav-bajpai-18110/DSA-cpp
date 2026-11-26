#include <bits/stdc++.h>
using namespace std;
int removeDuplicates(int arr[], int n) {
    if(n == 0)
        return 0;

    int i = 0;

    for(int j = 1; j < n; j++) {
        if(arr[i] != arr[j]) {
            i++;
            arr[i] = arr[j];
        }
    }

    return i + 1;
}

int main() {
    int n=7;
    int arr[n] = {1,1,2,2,4,3,3};
    n = removeDuplicates(arr, n);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }


    // set<int> st;
    // for(int i = 0;i<n;i++){
    //     st.insert(arr[i]);
    // }
    // for(auto it:st){
    //     cout<<it<<" ";
    // }
    return 0;
}
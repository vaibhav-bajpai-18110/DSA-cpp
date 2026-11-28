#include<bits/stdc++.h>
using namespace std;

// Brute force
int brute(int arr[], int n) {
    for(int i = 1; i <= n; i++) {
        int flag = 0;
        for(int j = 0; j < n; j++) {
            if(arr[j] == i) {
                flag = 1;
                break;
            }
        }
        if(flag == 0) {
            return i;
        }
    }
    return -1;
}


//optimal approach
int opti(int arr[],int n){
    int natural = n*(n+1)/2;
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum+=arr[i];
    }
    return natural-sum;
}



int main() {
    int n = 7;
    int arr[n] = {1,2,3,4,6,7};
    cout << brute(arr, n);
    cout<<endl;
    cout<<opti(arr,n);
    return 0;
}

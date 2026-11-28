#include <bits/stdc++.h>
using namespace std;


// Dutch national flag algorethem

int main() {
    int n=10;
    int arr[n] = {0,1,1,1,0,0,2,0,2,1};
    
    
    int l = 0;
    int h = n-1;
    int m = 0;
    while(m<=h){
        if(arr[m] == 0){
            swap(arr[l],arr[m]);
            l++;
            m++;
        }
        else if(arr[m] == 1){
            m++;
        }
        else if(arr[m] == 2) {
            swap(arr[h],arr[m]);
            h--;
        }
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
        
    return 0;
}
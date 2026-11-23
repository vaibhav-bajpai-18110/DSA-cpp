#include <bits/stdc++.h>
using namespace std;

// 'a' == 97;
// 'A' == 65;
// use acsii value for freequency array of character



int main() {
    string s = "abdcsabfkabhvbseijghsfhbvahfdk";
    int arr[26] = {0};  //frequency array 
    char target = 'a';  
    for(int i = 0;i<s.size();i++){
        if(s[i]==target){
            //fetching 
            arr[target-'a'] += 1;
        }
    }
    cout<<arr[target-'a'];
    return 0;
}
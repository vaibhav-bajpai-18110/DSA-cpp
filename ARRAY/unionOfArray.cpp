#include <bits/stdc++.h>
using namespace std;
int main() {
    int n = 6;
    int m = 7;
    int arr[n] = {1, 1, 2, 2, 3, 4};
    int arr2[m] = {3, 4, 4, 5, 5, 6, 7};
    vector<int> unionArr;
    int l = 0;
    int r = 0;
    while (l < n && r < m) {
        if (arr[l] <= arr2[r]) {
            if (unionArr.empty() || unionArr.back() != arr[l]) {
                unionArr.push_back(arr[l]);
            }
            l++;
        }
        else {
            if (unionArr.empty() || unionArr.back() != arr2[r]) {
                unionArr.push_back(arr2[r]);
            }
            r++;
        }
    }
    while (l < n) {
        if (unionArr.empty() || unionArr.back() != arr[l]) {
            unionArr.push_back(arr[l]);
        }
        l++;
    }
    while (r < m) {
        if (unionArr.empty() || unionArr.back() != arr2[r]) {
            unionArr.push_back(arr2[r]);
        }
        r++;
    }
    for (int i = 0; i < unionArr.size(); i++) {
        cout << unionArr[i] << " ";
    }
    return 0;
}
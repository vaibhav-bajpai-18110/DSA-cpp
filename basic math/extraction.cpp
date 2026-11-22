#include <iostream>
using namespace std;

int main() {
    // extracting each and every digit from number
    int n = 89564;
    for(int i=0;i<n;i++){
        int a = n%10;       //by using madulous we can access nd seperate each and every single digit from number 
        cout<<a<<endl;
        n/=10;              // for continue the extraction we will reduce the number by one digit every time
    }
    return 0;
}
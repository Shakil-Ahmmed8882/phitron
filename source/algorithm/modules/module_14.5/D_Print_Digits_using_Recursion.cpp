#include <bits/stdc++.h>
using namespace std;


void printDigit(int n){


    if(n < 10){
        cout << n << " ";
        return; 
    }
    
    printDigit(n / 10); 
    cout << n % 10 << " ";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        printDigit(n); 
        cout << "\n";
    }
    return 0;
}

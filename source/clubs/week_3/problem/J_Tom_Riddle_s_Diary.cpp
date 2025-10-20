#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(); 

    set<string> seen;
    for (int i = 0; i < n; i++) {
        
        
        string name;
        getline(cin, name); 



        if (seen.count(name)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
            seen.insert(name);
        }
    }

    return 0;
}

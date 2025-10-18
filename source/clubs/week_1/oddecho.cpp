#include <iostream>
#include <string>
using namespace std;

int main() {

    
    // fast io
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    string word;
    
    for (int i = 1; i <= N; i++) {
        cin >> word;
        if (i % 2 == 1) { 
            if (i > 1) cout << " "; 
            cout << word;
        }
    }
    cout << endl;
    return 0;
}



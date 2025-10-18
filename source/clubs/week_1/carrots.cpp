#include <iostream>
#include <string>
using namespace std;

int main() {
    int N, P;
    cin >> N >> P;
    cin.ignore(); 

    string line;
    for (int i = 0; i < N; i++) {
        getline(cin, line);
    }

    cout << P << endl; 
    return 0;
}



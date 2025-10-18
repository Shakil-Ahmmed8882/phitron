#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool found = false;
    for (int i = 0; i < s.size() - 1; i++) {
        if (s[i] == 's' && s[i+1] == 's') {
            found = true;
            break;
        }
    }



    if (found)
        cout << "hiss\n";
    else
        cout << "no hiss\n";

    return 0;
}
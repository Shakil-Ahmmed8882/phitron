#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


#define ll long long

#define fr(i, n) for (int i = 0; i < (n); i++)
#define nl cout << "\n"
#define dbg(var) cout << #var << "=" << var << " "
#define all(v) v.begin(), v.end()
#define FAST_IO                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);


void solve()
{

  int N;
    

    if (!(cin >> N)) return; 

    string S;
    

    if (!(cin >> S)) return;

    size_t first_zero_index = S.find('0');

    if (first_zero_index == string::npos) {
        cout << 0 << "\n";
        return;
    }

    int pulse_count = 0;

    for (size_t i = first_zero_index + 1; i < S.length(); ++i) {
        if (S[i] == '1') {
            pulse_count++;
        }
    }
    cout << pulse_count << "\n";

}

int main()
{
    FAST_IO;
       int T;
    

    if (!(cin >> T)) return 0;


    while (T--) {
        solve();
    }
    return 0;
}
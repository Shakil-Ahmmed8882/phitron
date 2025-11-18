#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define FAST_IO                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);


void calculate_counts(const string& S, int N, int& cnt00, int& cnt11) {
    cnt00 = 0;
    cnt11 = 0;
    
    for (int i = 0; i < N - 1; ++i) {
        if (S[i] == '0' && S[i+1] == '0') {
            cnt00++;
        } else if (S[i] == '1' && S[i+1] == '1') {
            cnt11++;
        }
    }
}


void solve()
{
    int N; 
    if (!(cin >> N)) return; 

    string S;
    if (!(cin >> S)) return;

    int firsst_cnt00, initial_cnt11;
    calculate_counts(S, N, firsst_cnt00, initial_cnt11);

    
    if (initial_cnt11 >= firsst_cnt00) {
        cout << 0 << "\n";
        return;
    }

    
    
    for (int i = 0; i < N; ++i) {
        int current_cnt00 = firsst_cnt00;
        int current_cnt11 = initial_cnt11;
        char old_char = S[i];
        char new_char = (old_char == '0' ? '1' : '0');

        if (i > 0) {
            char prev = S[i-1];
            
            
            if (prev == old_char) {
                if (old_char == '0') current_cnt00--;
                else current_cnt11--;
            }
            
            
            if (prev == new_char) {
                if (new_char == '0') current_cnt00++;
                else current_cnt11++;
            }
        }

        
        if (i < N - 1) {
            char next = S[i+1];
            
            
            if (old_char == next) {
                if (old_char == '0') current_cnt00--;
                else current_cnt11--;
            }
            
            
            if (new_char == next) {
                if (new_char == '0') current_cnt00++;
                else current_cnt11++;
            }
        }

        
        if (current_cnt11 >= current_cnt00) {
            cout << 1 << "\n";
            return;
        }
    }

    cout << 2 << "\n";
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
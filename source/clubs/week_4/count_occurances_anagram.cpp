

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fr(i, n) for (int i = 0; i < (n); i++)
#define nl cout << "\n"
#define dbg(var) cout << #var << "=" << var << " "
#define all(v) v.begin(), v.end()
#define FAST_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);


    
    class Solution {
  public:
    int search(string &pat, string &txt) {
        int n = txt.size();
        int m = pat.size();
        if (m > n) return 0;

        
        int freqP[26] = {0}, freqW[26] = {0};

        
        for (int i = 0; i < m; ++i) {
            ++freqP[pat[i] - 'a'];
            ++freqW[txt[i] - 'a'];
        }


        int matches = 0;
        for (int i = 0; i < 26; ++i)
            if (freqP[i] == freqW[i]) ++matches;

        int count = 0;
        if (matches == 26) ++count;

        
        for (int i = m; i < n; ++i) {
            int inIdx = txt[i] - 'a';
            int outIdx = txt[i - m] - 'a';

        
            if (freqW[outIdx] == freqP[outIdx]) --matches; 
            --freqW[outIdx];
            if (freqW[outIdx] == freqP[outIdx]) ++matches; 

            
            if (freqW[inIdx] == freqP[inIdx]) --matches; 
            ++freqW[inIdx];
            if (freqW[inIdx] == freqP[inIdx]) ++matches; 

            if (matches == 26) ++count;
        }

        return count;
    }
};

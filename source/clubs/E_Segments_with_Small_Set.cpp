

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

void solve()
{
  
    int n;
    long long k; 
    if (!(cin >> n >> k)) return; 

    
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    long long good_segmentss = 0;
    int left = 0; 

    map<int, int> counts; 

    for (int right = 0; right < n; ++right) {
        int current_element = a[right];
        counts[current_element]++;

        while (counts.size() > k) {
            int left_element = a[left];
            counts[left_element]--;

            
            if (counts[left_element] == 0) {
                counts.erase(left_element);
            }

            left++;
        }
        good_segmentss += (right - left + 1);
    }
    cout << good_segmentss << endl;

    
}

int main()
{
    FAST_IO;
    solve();
    return 0;
}

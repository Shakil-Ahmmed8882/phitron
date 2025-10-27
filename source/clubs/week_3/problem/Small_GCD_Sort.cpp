




#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fr(i, n) for (int i = 0; i < (n); i++)
#define nl cout << "\n"
#define dbg(var) cout << #var << "=" << var << " "
#define all(v) v.begin(), v.end()
#define FAST_IO  ios_base::sync_with_stdio(false); cin.tie(NULL);





int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}



int main()
{
  FAST_IO;

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        
        vector<vector<int>> buckets(N + 1);

        
        for (int i = 1; i <= N; i++) {
            int score = findGCD(i, N);
            buckets[score].push_back(i);
        }

        
        for (int g = N; g >= 1; g--) {
            for (int player : buckets[g]) {
                cout << player << " ";
            }
        }
        
        cout << '\n';
    }

    


    
    return 0;
}

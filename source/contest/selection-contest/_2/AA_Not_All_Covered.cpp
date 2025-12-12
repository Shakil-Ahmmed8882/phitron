#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    FAST_IO;
    int N, M;
    cin >> N >> M;
    vector<int> coverage(N + 2, 0); 
    vector<pair<int,int>> turrets(M);



    for(int i = 0; i < M; ++i){
        int L, R;
        cin >> L >> R;
        turrets[i] = {L,R};
        coverage[L] += 1;
        if(R+1 <= N) coverage[R+1] -= 1;
    }

    
    for(int i = 1; i <= N; ++i){
        coverage[i] += coverage[i-1];
    }

    int min_cov = *min_element(coverage.begin() + 1, 
    coverage.begin() + N + 1);



    
    if(min_cov == 0){
        cout << 0 << "\n";
        return 0;
    }

    cout << min_cov << "\n";
}

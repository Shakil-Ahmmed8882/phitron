

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fr(i, n) for (int i = 0; i < (n); i++)
#define nl cout << "\n"
#define dbg(var) cout << #var << "=" << var << " "
#define all(v) v.begin(), v.end()
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);

bool isPrime(int n){

    if(n == 1)
        return false; 

    for(int i = 2; i * i <= n; i++){
        if(n % i == 0)
            return false; 
    }

    return true; 

}
int main()
{
    FAST_IO;
    int n; 
    cin >> n; 
    if(isPrime(n)){
        cout << 1 << "\n"; 
    }else if(n % 2 == 0){
        cout << 2 << "\n"; 
    }else{
        if(isPrime(n - 2 )){
            cout << 2 << "\n"; 
        }else{
            cout << 3 << "\n"; 
        }
    }



    return 0;
}

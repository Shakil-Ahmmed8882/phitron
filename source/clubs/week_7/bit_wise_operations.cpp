














#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl cout << "\n"
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);

int check_kth_bit_on_or_off(int n, int k){
    return ((n >> k )& 1); 
}
void print_on_and_off_bits(int n){

    for(int k = 7; k >= 0; k--){
        if(check_kth_bit_on_or_off(n, k)){
            cout << "1" << " ";
        }else{
            cout << "0" << " ";
        }
    }
}
int main()
{
    FAST_IO;
    // cout << check_kth_bit_on_or_off(20, 4) << "\n"; 
    print_on_and_off_bits(20);
    
    return 0;
}
















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

int turn_on_kth_bit(int n, int k){
    return (n | (1 << k)); 
}

int turn_off_kth_bit(int n, int k){
    return (n & ~( 1 << k)); 
}

int toggle_kth_bit(int n, int k){
    return ( n ^ ( 1 << k)); 
}

int main()
{
    FAST_IO;
    // cout << check_kth_bit_on_or_off(20, 4) << "\n"; 
    // print_on_and_off_bits(20);
    // cout << turn_on_kth_bit(20, 1) << "\n";
    // cout << turn_off_kth_bit(20, 2) << "\n";
    cout << toggle_kth_bit(20, 2) << "\n";

    
    return 0;
}

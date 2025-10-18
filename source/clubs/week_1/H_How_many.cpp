#include <iostream>
using namespace std;

int main() {
    int S, T;
    cin >> S >> T;

    long long total = 0;  
    
    
    
    
    


    


    for (int a = 0; a <= S; a++) {
        for (int b = 0; b <= S - a; b++) {
            for (int c = 0; c <= S - a - b; c++) {
                bool sum_ok = (a + b + c <= S);
                bool product_ok = (a * b * c <= T);

                if (sum_ok && product_ok) {
                    total++;
                }
            }
        }
    }

    cout << total << endl;
    return 0;
}

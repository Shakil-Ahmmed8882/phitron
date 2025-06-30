#include <bits/stdc++.h>
using namespace std;

void insertX(vector<int> &A_array, vector<int> &B_array, int n, int m, int x)
{
    for (int i = 0; i < A_array.size(); i++)
    {
        if(i == x){
            
        }
    }

};

int main()
{
    // step __ 1
    int n;
    cin >> n;
    vector<int> A_array(n);

    for (int i = 0; i < n; i++)
    {
        cin >> A_array[i];
    }

    // step __ 2
    int m;
    cin >> m;
    vector<int> B_array(m);
    for (int i = 0; i < m; i++)
    {
        cin >> B_array[i];
    }

    // step __ 3
    int x;
    cin >> x;

    insertX(A_array, B_array, n, m, x);

    return 0;
}

// step __ 1 : stop at the x index ✅
// step __ 2 : increase the size of that array 
// step __ 3 : shift the elements to the right 
// step __ 4 : insert the new elment to the created empty place

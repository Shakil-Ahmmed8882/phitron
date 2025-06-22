

#include <bits/stdc++.h>
using namespace std;

vector<int> concatenate(const vector<int> &A, const vector<int> &B)
{
    vector<int> C;
    for (int i = 0; i < B.size(); i++)
    {
        C.push_back(B[i]);
    }
    
    for (int i = 0; i < A.size(); i++)
    {
        C.push_back(A[i]);
    }

    return C;
}

int main()
{

    int n;
    cin >> n;

    vector<int> A(n);
    vector<int> B(n);

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> B[i];
    }

    vector<int> C = concatenate(A, B);

    for (int i = 0; i < C.size(); i++)
    {
        cout << C[i] << " ";
    }

    return 0;
}
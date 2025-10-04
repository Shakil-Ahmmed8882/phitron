#include <bits/stdc++.h>
using namespace std;

#define ll long long
// int vector
#define vi vector<int>
#define vvi vector<vi>

// long long vector
#define vll vector<ll>
#define vvl vector<vll>
// bool vector
#define vb vector<bool>
#define vvb vector<vb>
// char vector
#define vc vector<char>

// loops, new line, debug, sort, unique
#define fr(i, n) for (int i = 0; i < (n); i++)
#define nl cout << "\n"
#define dbg(var) cout << #var << "=" << var << " "
#define all(v) v.begin(), v.end()
#define sz(v) (int)(v.size())
#define srt(v) sort(all(v))
#define unq(v) v.resize(distance(v.begin(), unique(all(v))))



void conquer(int c[],  int l, int mid,  int r){


    int n = mid - l + 1; 
    int a[n];
    int k = l; 
    for(int i = 0; i < n; i++){
        a[i] = c[k];
        k++; 
    }
    
    int m = r - mid;
    int b[m];
    k = mid + 1; 
    for(int i = 0; i < m; i++){
        b[i] = c[k];
        k++; 
    }
    

    
    int i  = 0, j = 0, curr = l;

    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            c[curr] = a[i];
            i++;
            curr++;
        }
        else
        {
            c[curr] = b[j];
            j++;
            curr++;
        }
    }

    while (i < n)
    {
        c[curr] = a[i];
        i++;
        curr++;
    }

    while (j < m)
    {
        c[curr] = b[j];
        j++;
        curr++;
    }

}
void divide(int a[], int l, int r)
{

    if(l >= r) return; 
    int mid = ( l + r ) / 2; 
    divide(a, l, mid);    
    divide(a, mid + 1, r);   
    conquer(a, l, mid,  r); 
}

int main()
{

    // fast io
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   
    // input
    int n;
    cin >> n;
    int a[n];
    fr(i, n) cin >> a[i];

    // test input
   divide(a, 0, n - 1);

    fr(i, n) cout << a[i] << " ";
    
    return 0;
}

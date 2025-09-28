#include <bits/stdc++.h>
using namespace std;

#define ll long long int
vector<pair<ll, ll>> adj_list[100005];

int main()
{

    ll n, e;
    cin >> n >> e;
    for (ll i = 0; i < e; i++)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        adj_list[a].push_back({b, c});
        adj_list[b].push_back({a, c}); // undirected 
    }
    

    return 0;
}
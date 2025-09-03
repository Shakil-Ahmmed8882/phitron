#include <bits/stdc++.h>
using namespace std;

class EdgeList
{
public:
    int a, b, c;
    EdgeList(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};

int dis[10005];
vector<EdgeList> edge_list;
int n, e;

void belman_ford()
{

    for (int i = 0; i < n - 1; i++) // o(v)
    {
        for (auto ed : edge_list) // o(e)  = o(ve)
        {
            int a, b, c;
            a = ed.a;
            b = ed.b;
            c = ed.c;

            if (dis[a] != INT_MAX && dis[a] + c < dis[b])
            {
                dis[b] = dis[a] + c;
            }
        }
    }
    bool cycle = false;
    for (auto ed : edge_list)
    {
        int a, b, c;
        a = ed.a;
        b = ed.b;
        c = ed.c;

        if (dis[a] != INT_MAX && dis[a] + c < dis[b])
            cycle = true;
    }

    if (cycle)
        cout << "Cycle Detected" << endl;
    else
    {

        for (int i = 0; i < n; i++)
            cout << i << " -> " << dis[i] << endl;
    }
}

int main()
{
    cin >> n >> e;

    for (int i = 0; i < n; i++)
        dis[i] = INT_MAX;

    dis[0] = 0;
    
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        edge_list.push_back(EdgeList(a, b, c));
    }

    belman_ford();

    return 0;
}
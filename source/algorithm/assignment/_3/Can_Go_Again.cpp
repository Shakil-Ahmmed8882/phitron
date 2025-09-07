#include <bits/stdc++.h>
using namespace std;

long long int dis[100005];
class EdgeList {
public:
    int a, b, w;
    EdgeList(int a, int b, int w) {
        this->a = a;
        this->b = b;
        this->w = w;
    }
};

vector<EdgeList> edge_list;
int n, e;
bool cycle = false;

void bellman_ford(int source) {
    for (int i = 1; i <= n; i++)
        dis[i] = LONG_MAX;

    dis[source] = 0;

    for (int i = 0; i < n - 1; i++) {
        for (auto ed : edge_list) {
            int a = ed.a, b = ed.b, c = ed.w;
            if (dis[a] != LONG_MAX && dis[a] + c < dis[b]) {
                dis[b] = dis[a] + c;
            }
        }
    }


    for (auto ed : edge_list) {
        int a = ed.a, b = ed.b, c = ed.w;
        if (dis[a] != LONG_MAX && dis[a] + c < dis[b]) {
            cycle = true;
            return;
        }
    }
}

int main() {
    cin >> n >> e;

    while (e--) {
        int a, b, w;
        cin >> a >> b >> w;
        edge_list.push_back(EdgeList(a, b, w));
    }

    int s;
    cin >> s;
    bellman_ford(s);

    int t;
    cin >> t;
    if (cycle) {
        cout << "Negative Cycle Detected\n"; 
        return 0;
    }

    while (t--) {
        int d;
        cin >> d;

        if (dis[d] == LONG_MAX)
            cout << "Not Possible\n";
        else
            cout << dis[d] << "\n";
    }

    return 0;
}

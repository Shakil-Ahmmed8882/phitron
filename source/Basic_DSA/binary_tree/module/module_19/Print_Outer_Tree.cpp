#include <bits/stdc++.h>
using namespace std;

struct Node {
    int v; Node *l, *r;
    Node(int _v): v(_v), l(nullptr), r(nullptr) {}
};

// Build from level-order (–1 = null)
Node* build(vector<int>& A) {
    if (A.empty() || A[0] == -1) return nullptr;
    Node* root = new Node(A[0]);
    queue<Node*> q; q.push(root);
    int i=1, n=A.size();
    while (i<n && !q.empty()) {
        Node* cur = q.front(); q.pop();
        if (i<n && A[i]!=-1) { cur->l = new Node(A[i]); q.push(cur->l); }
        i++;
        if (i<n && A[i]!=-1) { cur->r = new Node(A[i]); q.push(cur->r); }
        i++;
    }
    return root;
}


vector<int> leftPath(Node* root) {
    vector<int> P;
    for (Node* cur = root; cur; ) {
        P.push_back(cur->v);
        if (!cur->l && !cur->r) break;
        cur = (cur->l ? cur->l : cur->r);
    }
    return P;
}

vector<int> rightPath(Node* root) {
    vector<int> P;
    for (Node* cur = root; cur; ) {
        P.push_back(cur->v);
        if (!cur->l && !cur->r) break;
        cur = (cur->r ? cur->r : cur->l);
    }
    return P;
}

bool right_Recursion(Node* cur) {
    if (!cur) return true;
    if (cur->l) return false;
    if (!cur->r) return true;  // leaf
    return right_Recursion(cur->r);
}

bool leftRecursion(Node* cur) {
    if (!cur) return true;
    if (cur->r) return false;
    if (!cur->l) return true;
    return leftRecursion(cur->l);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> A; int x;
    while (cin>>x) A.push_back(x);
    Node* root = build(A);
    if (!root) return 0;

    auto L = leftPath(root);
    auto R = rightPath(root);

    // 1) pure right-skew → just print forward
    if (right_Recursion(root)) {
        for (int v : L) cout<<v<<' ';
        return 0;
    }
    // 2) pure left-skew → print reversed
    if (leftRecursion(root)) {
        for (auto it=L.rbegin(); it!=L.rend(); ++it) cout<<*it<<' ';
        return 0;
    }
    // 3) they coincide (zig-zag but a single path)
    if (L == R) {
        // if it leans right (no left child at root) → forward
        if (!root->l) {
            for (int v : L) cout<<v<<' ';
        }
        // if it leans left (no right child) → reversed
        else if (!root->r) {
            for (auto it=L.rbegin(); it!=L.rend(); ++it) cout<<*it<<' ';
        }
        else {
            // fallback (shouldn’t really happen)
            for (int v : L) cout<<v<<' ';
        }
        return 0;
    }

    // 4) general: left boundary (rev L), then skip root in R and append
    for (auto it=L.rbegin(); it!=L.rend(); ++it) cout<<*it<<' ';
    for (int i=1; i<(int)R.size(); ++i) cout<<R[i]<<' ';
    return 0;
}

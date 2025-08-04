

#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void print_level_nodes(Node *root)
{

    if (!root)
    {
        cout << "Tree is empty" << endl;
        return;
    }
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();
        cout << f->val << " ";
        if (f->left)
        {
            q.push(f->left);
        }
        if (f->right)
        {
            q.push(f->right);
        }
    }
}

Node *convert(int v[], int n, int l, int r)
{

    if (l > r)
        return NULL;

    int mid = (r + l) / 2;
    Node *root = new Node(v[mid]);
    Node *left_root = convert(v, n, l, mid - 1);
    Node *right_root = convert(v, n, mid + 1, r);

    root->left = left_root;
    root->right = right_root;
    return root;
}

int main()
{

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    Node *root = convert(a, n, 0, n - 1); // array, size, start, end
    print_level_nodes(root);

    return 0;
}
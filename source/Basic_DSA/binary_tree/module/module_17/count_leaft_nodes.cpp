
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

int count_leaf_node(Node *root)
{

    if (!root)
    {
        return 0;
    }

    if (root->left == NULL && root->right == NULL)
        return 1;

    int left_count = count_leaf_node(root->left);
    int right_count = count_leaf_node(root->right);

    return left_count + right_count; 
}



Node *take_input()
{
    int val;
    cin >> val;
    Node *root = new Node(val);
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {

        // extract & pop
        Node *parent_node = q.front();
        q.pop();
        int left_val, right_val;
        cin >> left_val >> right_val;

        // make connection
        Node *left_node = new Node(left_val);
        Node *right_node = new Node(right_val);

        if (left_val == -1)
            parent_node->left = NULL;
        else
            parent_node->left = left_node;

        if (right_val == -1)
            parent_node->right = NULL;
        else
            parent_node->right = right_node;

        // push children
        if (parent_node->left)
            q.push(left_node);
        if (parent_node->right)
            q.push(right_node);
    }

    return root;
}

int main()
{
    Node *root = take_input();
    cout << count_leaf_node(root) << endl; 
    return 0;
}
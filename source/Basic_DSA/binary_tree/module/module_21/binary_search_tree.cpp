

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

Node *input_tree(){

    int v;
    cin >> v;
    Node *root = new Node(v);

    queue<Node *> q;
    if (root)
    {
        q.push(root);
    }
    while (!q.empty())
    {

        // extract
        Node *parent = q.front();
        q.pop();

        // work on it
        int l, r;
        cin >> l >> r;
        Node *left_node = new Node(l);
        Node *right_node = new Node(r);

        if (l == -1)
        {
            parent->left = NULL;
        }
        else
        {
            parent->left = left_node;
        }
        if (r == -1)
        {
            parent->right = NULL;
        }
        else
        {
            parent->right = right_node;
        }

        // push the children
        if (parent->left)
        {
            q.push(left_node);
        }
        if (parent->right)
        {
            q.push(right_node);
        }
    }

    return root; 
}


bool search(Node* root, int val){
    if(!root) return false; 

    if(root->val == val)
        return true; 

    if(val > root->val)
        return search(root->right, val);
        else 
        return search(root->right, val);

}


int main()
{

    Node *root = input_tree();
    int v; 
    cin >> v; 
    if(search(root, v))
        cout << "Found" << endl; 
    else    
        cout << "Not Found" << endl; 
    return 0;
}
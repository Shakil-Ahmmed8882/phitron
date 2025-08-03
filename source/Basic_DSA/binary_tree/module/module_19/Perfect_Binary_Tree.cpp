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

void take_input(Node *&root)
{

    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {


        // extract 
        Node *p = q.front();
        q.pop();

        // work on it
        int l, r;
        cin >> l >> r;
        Node *left_node = new Node(l);
        Node *right_node = new Node(r);

        if (l == -1)
            p->left = NULL;
        else
            p->left = left_node;
        if (r == -1)
            p->right = NULL;
        else
            p->right = right_node;

        // push the children 
        if (p->left)
            q.push(left_node);
        if (p->right)
            q.push(right_node);
    }
}


int find_height (Node* root){

    if(!root){
        return 0;
    }

    int l = find_height(root->left); 
    int r = find_height(root->right); 

    return max(l, r) + 1; 
}

int count_nodes(Node* root){
    if(!root) return 0; 

    int l = count_nodes(root->left); 
    int r = count_nodes(root->right); 

    return (l + r) + 1; 

}


int main()
{
    int v; 
    cin >> v; 
    Node * root = new Node(v); 
    take_input(root);
    int h = find_height(root); 
    int max_nodes = pow(2, h) - 1;
    int total_nodes = count_nodes(root); 


    if(max_nodes == total_nodes){
        cout << "YES" << endl ;
    }else{
        cout << "NO" << endl ;
    }


    return 0;
}
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


void print_leaf_sum (Node* root){

    if(!root){
        return;
    }
    queue<Node*> q;
    q.push(root);
    int sum =0;
    while(!q.empty()){
        Node * f = q.front(); 
        q.pop(); 
        if(
            f->left != NULL || f->right != NULL
        ){
            sum +=f->val;
        }
        if(f->left){
            q.push(f->left);
        }
        if(f->right){
            q.push(f->right);
        }
    }

    cout << sum; 

}

int main()
{
    int v; 
    cin >> v; 
    Node * root = new Node(v); 
    take_input(root);
    print_leaf_sum(root); 


    return 0;
}


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

void insert_in_bst(Node* &root, int v){

    if(root == NULL){
        root = new Node(v); 
        return; 
    }
    if(root->val > v){
        if(root->left == NULL){
            root->left = new Node(v); 
        }else{
            insert_in_bst(root->left, v); 
        }
    }

    if(root->val < v){
        if(root->right == NULL){
            root->right = new Node(v); 
        }else{
            insert_in_bst(root->right, v); 
        }
    }

}

void print_level_nodes(Node* root){


    if(!root){
        cout << "Tree is empty" << endl;
        return;
    }
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node * f = q.front(); 
        q.pop(); 
        cout << f->val << " ";
        if(f->left){
            q.push(f->left);
        }
        if(f->right){
            q.push(f->right);
        }
    }
}



int main()
{

    Node *root = input_tree();
    int v; 
    cin >> v; 
    insert_in_bst(root, v);
    print_level_nodes(root);



    return 0;
}
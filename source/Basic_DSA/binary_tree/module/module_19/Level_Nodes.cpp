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
int max_height(Node* root){

    if(root == NULL)
        return 0;
    if(root->left == NULL && root->right == NULL)
        return 0; 

    int l = max_height(root->left); 
    int r = max_height(root->right); 

    return max(l,r) + 1; 


}

void print_level_nodes(Node* root, int x){


    if(!root){
        cout << "Tree is empty" << endl;
        return;
    }
    queue<pair<Node*,int>> q;
    
    q.push({root, 0});

    if(x == 0){
        cout << root->val << " "; 
        return ; 
    }
    
    int maximum_height = max_height(root); 
    if(x > maximum_height || x < 0){
        cout << "Invalid" << " "; 
        return; 
        
    }
    while(!q.empty()){
        pair<Node *, int> f = q.front(); 
        q.pop(); 
        Node* p_node = f.first; 
        int level = f.second; 
        
        if(level == x){
            cout << p_node->val << " "; 
        }

        if(p_node->left){
            q.push({p_node->left, level+1});
        }
        if(p_node->right){
            q.push({p_node->right, level+1});
        }
    }
}


int main()
{
    int v, x; 
    cin >> v; 
    Node * root = new Node(v); 
    take_input(root);
    cin >> x; 
    
    print_level_nodes(root, x); 


    return 0;
}
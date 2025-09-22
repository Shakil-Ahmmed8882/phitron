

#include <bits/stdc++.h>
using namespace std;


class Node{
    public: 
    int val; 
    Node* left; 
    Node* right; 
    Node(int val){
        this->val = val; 
        this->left = NULL; 
        this->right = NULL; 
    }
}; 

void input_tree(Node* root){

    queue<Node*> q;
    q.push(root); 


    while (!q.empty())
    {
        // extact 
        Node* parent_node = q.front();
        q.pop(); 

        // action 
        int left_val, right_val;
        cin >> left_val >> right_val;

        if(left_val != -1){
            parent_node->left = new Node(left_val); 
            q.push(parent_node->left); 
        }

        if(right_val != -1){
            parent_node->right = new Node(right_val); 
            q.push(parent_node->right);
        }
        
    }
}



void print_level_nodes(Node* root){
    if(!root) return; 

    queue<Node*> q; 
    q.push(root); 

    while (!q.empty()){

        // extract 
        Node* parent_node = q.front(); 
        q.pop(); 

        // action 
        cout << parent_node->val << " "; 
        
        if(parent_node->left) 
            q.push(parent_node->left); 
        
        if(parent_node->right) 
            q.push(parent_node->right); 
        

    }
}




int main()
{
    int val; 
    cin >> val; 
    Node* root = new Node(val); 
    input_tree(root); 
    print_level_nodes(root);

    
    return 0;
}
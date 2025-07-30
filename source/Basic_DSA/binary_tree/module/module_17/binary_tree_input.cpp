#include <bits/stdc++.h>
using namespace std;


class Node {
public:
    int val;
    Node *left;
    Node *right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void input_tree(){
     int val; 
     cin >> val; 
     Node* root = new Node(val);

     queue<Node*> q; 
     q.push(root);

    while(!q.empty()){
        // extract 
        Node* parent_node = q.front(); 
        q.pop(); 
        // create left , right node & connect 
        int left_val, right_val; 
        cin >> left_val >> right_val; 
        Node* left_node = new Node(left_val); 
        Node* right_node = new Node(right_val); 

        if(left_val == -1) parent_node->left = NULL; 
            else parent_node->left = left_node; 
        if(right_val == -1) parent_node->right = NULL;  
            else parent_node->right = right_node; 

        // push children 
        if(parent_node->left)
            q.push(left_node); 
        if(parent_node->right)
            q.push(right_node); 
    }
    

}

int main()
{
    
    return 0;
}
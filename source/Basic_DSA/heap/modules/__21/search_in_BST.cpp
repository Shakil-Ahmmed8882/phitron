/**
 * Definition for a binary tree node.
 * struct Node {
 *     int val;
 *     Node *left;
 *     Node *right;
 *     Node() : val(0), left(nullptr), right(nullptr) {}
 *     Node(int x) : val(x), left(nullptr), right(nullptr) {}
 *     Node(int x, Node *left, Node *right) : val(x), left(left), right(right) {}
 * };
 */

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
class Solution {
public:
    Node* find_node_in_BST(Node*root, int val){
        if(!root) return NULL; 

        if(root->val == val){
            return root; 
        }

        Node* l = find_node_in_BST(root->left, val); 
        Node* r = find_node_in_BST(root->right, val); 
        if(l) return l ; 
        return r; 
    }
    Node* searchBST(Node* root, int val) {
        return find_node_in_BST(root, val); 
        
    }
};
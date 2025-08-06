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
    Node* searchBST(Node* root, int val) {
        if(!root) return NULL; 
        if(root->val == val) return root; 
        if( root->val < val)
            return searchBST(root->right,val); 
        else
            return searchBST(root->left, val); 
    }
};

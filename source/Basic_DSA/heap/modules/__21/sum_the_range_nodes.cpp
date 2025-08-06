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
    int sum = 0; 
    void find_sum(Node* root, int low, int high){
        if(root == NULL) return; 
        if(root->val >= low && root->val <= high){
            sum+=  root->val ; 
        };
        find_sum(root->left, low, high); 
        find_sum(root->right, low, high); 
    }

    int rangeSumBST(Node* root, int low, int high) {
            find_sum(root, low, high); 
            return sum; 
    }
};
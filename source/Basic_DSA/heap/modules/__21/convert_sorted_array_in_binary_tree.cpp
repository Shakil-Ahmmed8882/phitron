#include <bits/stdc++.h>
using namespace std;


/**
 * 
 * 
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
    
    Node* convert(vector<int> &a, int l, int r){

        if(l > r) return NULL; 
                int mid = l + (r - l) / 2;
        Node* root = new Node(a[mid]); 
        Node* left_node = convert(a, l, mid - 1); 
        Node* right_node = convert(a, mid+1, r); 

        root->left = left_node; 
        root->right = right_node; 

        return root; 

    }



    Node* sortedArrayToBST(vector<int>& nums) {
        return convert(nums, 0, nums.size() - 1); 
    }
};


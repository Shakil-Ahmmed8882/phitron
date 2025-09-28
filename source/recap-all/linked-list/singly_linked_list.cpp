#include <bits/stdc++.h>


class Node{
    public: 
        int val; 
        Node* next; 
        Node(int val){
            this->next = NULL; 
            this->val = val; 
        }
};




void insert_at_tail(Node*& head, Node*& tail, int val){

    Node* newNode = new Node(val); 

    if(!head){
        head = newNode; 
        tail = newNode; 
        return; 
    }
    tail->next = newNode; 
    tail = tail->next; 
}

void delete_at_tail(Node*& head, Node*& tail){
    
    if(!head) return; 
    if(!head->next){
        Node* dn = head; 
        head = NULL; 
        tail = NULL; 
        delete dn; 
    }
}



using namespace std;
int main()
{
    Node* head = NULL; 
    Node* tail = NULL; 
    insert_at_tail(head, tail, 10); 


    return 0;
}
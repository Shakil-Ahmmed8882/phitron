#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void push_back(Node *&head, Node *&tail, int val)
{
    Node* newNode  = new Node(val); 
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return; 
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    

    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        push_back(head, tail, val);
    }

    Node* i = head; 
    Node* j = tail; 

    bool isPalindrome = true; 
    while (i != j && i != j->next){

        if(i->val != j->val){
            isPalindrome = false; 
        }

        i = i->next;
        j = j->prev;
    }

    if(isPalindrome){
        cout << "YES"; 
    }else{
        cout << "NO"; 
    }



    return 0;
}

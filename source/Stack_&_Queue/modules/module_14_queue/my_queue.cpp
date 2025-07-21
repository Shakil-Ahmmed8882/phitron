#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class MyQueue
{
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0 ;

    int push(int val) // o(1)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode; 
        tail = newNode; 
    }
    int pop(int val) // o(1)
    {
        sz--; 
      Node* deleteNode = head; 
      head  = head->next;
      delete deleteNode; 
    }

    int front(){
        return head->val; 
    }
    int back(){
        return tail->val; 
    }
    int size(){
        return sz; 
    }
    int empty(){
        return head == NULL ; 
    }


};

int main()
{
    
    return 0;
}


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

void print_forward(Node *head)
{
    Node *current = head;
    while (current != NULL)
    {
        cout << current->val << endl;
        current = current->next;
    }
}
void print_backward(Node *tail)
{
    Node *current = tail;
    while (current != NULL)
    {
        cout << current->val << endl;
        current = current->prev;
    }
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{

    Node *newNode = new Node(val);

    if (head == NULL)
    {
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
        if(val == -1 ){
            break;
        }
        insert_at_tail(head, tail, val); 
    }
    
    print_forward(head);
    cout << " __________________ " << endl; 
    print_backward(tail); 

    return 0;
}
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

void delete_at_head(Node *&head, Node *&tail)
{

    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;

    if (head == NULL)
    {
        tail = NULL;
        return;
    };
    head->prev = NULL;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *tail = new Node(490);

    head->next = a;
    a->prev = head;

    a->next = b;
    b->prev = a;

    b->next = tail;
    tail->prev = b;
    delete_at_head(head, tail);
    delete_at_head(head, tail);
    delete_at_head(head, tail);
    print_forward(head);

    return 0;
}
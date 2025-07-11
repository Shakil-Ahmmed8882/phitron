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

void delete_at_any_position(Node *&head, Node *&tail, int idx)
{
    Node *current = head;
    for (int i = 1; i < idx; i++)
    {
        current = current->next;
    }
    Node *deleteNode = current->next;
    current->next = current->next->next;
    current->next->prev = current;
    delete deleteNode;
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

    // Node *head = NULL;
    // Node *tail = NULL;
    delete_at_any_position(head, tail, 0);
    print_forward(head);

    return 0;
}
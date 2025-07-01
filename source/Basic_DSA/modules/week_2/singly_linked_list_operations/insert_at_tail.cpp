

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

void insert_at_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    } // now temp is in the last node
    temp->next = newNode;
};

void print_linked_list(Node *head)
{

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}
int main()
{

    // Node *head = new Node(10);
    // Node *a = new Node(20);
    // head->next = a;
    Node *head = NULL;
    insert_at_tail(head, 200);
    insert_at_tail(head, 300);
    insert_at_tail(head, 400);
    print_linked_list(head);

    return 0;
}
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
    tail = tail->next;
}

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

void delete_at_index(Node *&head, Node *&tail, int index)
{

    if (index == 0)
    {
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;

        if (head == NULL)
            tail = NULL;

        return;
    }

    Node *temp = head;
    for (int i = 0; i < index - 1; i++)
    {
        temp = temp->next;
    }

    Node *deleteNode = temp->next;
    temp->next = temp->next->next;

    if (temp->next == NULL)
        tail = temp;

    delete deleteNode;
}

void print_linked_list(Node *head)
{
    Node *current = head;
    while (current != NULL)
    {
        cout << current->val << " ";
        current = current->next;
    }
}

void find_duplicate(Node *&head, Node *&tail)
{
    Node *i = head;

    while (i != NULL)
    {
        Node *prev = i;
        Node *j = i->next;

        while (j != NULL)
        {
            if (i->val == j->val)
            {
                Node *deleteNode = j;
                prev->next = j->next;
                j = j->next;
                if (deleteNode == tail)
                    tail = prev;
                delete deleteNode;
            }
            else
            {
                prev = j;
                j = j->next;
            }
        }

        i = i->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int v;
        cin >> v;

        if (v == -1)
        {
            break;
        }
        insert_at_tail(head, tail, v);
    }
    find_duplicate(head, tail);
    print_linked_list(head);

    return 0;
}

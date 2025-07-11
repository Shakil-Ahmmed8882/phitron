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
};

void reverse_singly_linked_list(Node *&head, Node *&tail, Node *temp)
{

    if (temp->next == NULL)
    {
        head = temp;
        return;
    }
    reverse_singly_linked_list(head, tail, temp->next);
    temp->next->next = temp;
    temp->next = NULL;
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

        insert_at_tail(head, tail, val);
    }

    reverse_singly_linked_list(head, tail, head);
    cout << " head ____" << head->val << endl; 
    cout << " head ____" << head->next->val << endl; 
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val;
        tmp = tmp->next;
    }

    return 0;
}
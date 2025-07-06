

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

void print_difference(Node *head)
{

    Node *temp = head;
    int min_val = INT_MAX;
    int max_val = INT_MIN;
    while (temp != NULL)
    {
        min_val = min(min_val, temp->val);
        max_val = max(max_val, temp->val);
        temp = temp->next;
    }
    cout << max_val - min_val;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (1)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }

    print_difference(head);

    return 0;
}
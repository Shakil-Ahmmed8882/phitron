

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

int getMax(Node *head)
{

    Node *current = head;
    int max_value = INT_MIN;
    while (current != NULL)
    {
        max_value = max(max_value, current->val);
        current = current->next;
    }

    return max_value;
}

void print(Node *head)
{

    Node *current = head;
    int max_value = getMax(head);
    cout << max_value << endl;
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
    };

    print(head);

    return 0;
}
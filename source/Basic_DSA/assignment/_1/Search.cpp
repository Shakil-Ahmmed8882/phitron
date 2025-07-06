

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

void print(Node *head)
{

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val;
        temp = temp->next;
    }
}

void search(Node *head, int x)
{

    Node *current = head;
    bool x_found = false;
    int x_index = 0;

    while (current != NULL)
    {

        if (current->val == x)
        {
            x_found = true;
            break;
        }
        x_index++;
        current = current->next;
    }

    if (x_found)
    {
        cout << x_index << endl;
    }
    else
    {
        cout << -1 << endl;
        ;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
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
        int x;
        cin >> x;

        search(head, x);
    }

    return 0;
}
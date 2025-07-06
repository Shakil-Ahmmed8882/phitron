

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

int get_length(Node *head)
{
    Node *current = head;
    int count = 0;
    while (current != NULL)
    {
        current = current->next;
        count++;
    }
    return count;
};

void print_middle_value(Node *head)
{
    int length = get_length(head);
    if (length == 0)
    {
        return;
    };
    int mid = length / 2;

    
    Node *current = head;
    for (int i = 0; i < (length % 2 == 0 ? mid - 1 : mid); i++)
    {
         current = current->next;
    }

    if (length % 2 == 0)
    {
        cout << " __:" << current->val << " " << current->next->val;
    }
    else
    {
        cout << current->val;
    }

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

    print_middle_value(head);
    return 0;
}
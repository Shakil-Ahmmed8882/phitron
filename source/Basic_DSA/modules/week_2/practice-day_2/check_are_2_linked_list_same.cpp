

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

int getSize(Node *head)
{

    Node *current = head;
    int count = 0;
    while (current != NULL)
    {
        count++;
        current = current->next;
    }

    return count; 
}

void print(bool is_same)
{

    if (is_same)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;

    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head1, tail1, val);
    };

    Node *head2 = NULL;
    Node *tail2 = NULL;

    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head2, tail2, val);
    };

    int size1 = getSize(head1);
    int size2 = getSize(head2);
    print(size1 == size2);

    return 0;
}


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

bool check_is_same(Node *head1, Node *head2)
{
    int size1 = getSize(head1);
    int size2 = getSize(head2);
    if (size1 != size2) return false;

    Node *current1 = head1;
    Node *current2 = head2;

    while (current1 != NULL)
    {

        if (current1->val != current2->val)
        {
            return false;
        }

        current1 = current1->next;
        current2 = current2->next;
    }


    return true ;
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

    bool is_same = check_is_same(head1, head2);
    print(is_same);

    return 0;
}
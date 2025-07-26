

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
        this->prev = NULL;
        this->next = NULL;
    }
};

class MyStack
{
public:
    int sz = 0;
    Node *head = NULL;
    Node *tail = NULL;


    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }

        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
      void pop(){
        sz--; 
        Node* dn = tail; 
        tail = dn->prev; 
        delete dn; 
        if(tail == NULL) {
            head = NULL; 
            return; 
        }
        tail->next = NULL; 
    }

    int top()
    {
        return tail->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        return head == NULL;
    }
};

class MyQueue
{
public:
    int sz = 0;
    Node *head = NULL;
    Node *tail = NULL;

    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }

        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
   void pop(){
        sz--; 
        Node* dn = head; 
        delete dn; 
        head = head->next; 
        if(head == NULL) {
            tail = NULL; 
            return; 
        }
        head->prev = NULL; 
        
    }

    int front()
    {
        return head->val;
    }

    int back()
    {
        return tail->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        return head == NULL;
    }
};

int main()
{
    int n, m;
    cin >> n >> m;

    MyStack s;
    MyQueue q;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.push(x);
    }

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    if (s.size() != q.size())
    {
        cout << "NO" << endl;
        return 0;
    }

    bool same = true;
    while (!s.empty())
    {

        if (s.top() != q.front())
        {
            same = false;
            break;
        }

        s.pop();
        q.pop();
    }

    if (same)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
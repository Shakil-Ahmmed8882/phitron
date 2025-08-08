#include <bits/stdc++.h>
using namespace std;


class Node {
public:
    int val;
    Node* prev;
    Node* next;

    Node(int val) {
        this->val = val;
        prev = NULL;
        next = NULL;
    }
};

bool insertAt(Node*& head, Node*& tail, int index, int value, int& size) {
    if (index < 0 || index > size) return false;

    Node* newNode = new Node(value);

    if (index == 0) {
        newNode->next = head;
        if (head != NULL) head->prev = newNode;
        head = newNode;
        if (tail == NULL) tail = newNode;
    }
    else if (index == size) {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    else {
        Node* temp = head;
        for (int i = 0; i < index - 1; i++) temp = temp->next;

        Node* nextNode = temp->next;
        newNode->next = nextNode;
        newNode->prev = temp;
        temp->next = newNode;
        nextNode->prev = newNode;
    }

    size++;
    return true;
}

void printLeft(Node* head) {
    cout << "L -> ";
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}


void printRight(Node* tail) {
    cout << "R -> ";
    Node* temp = tail;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main() {
    int Q;
    cin >> Q;

    Node* head = NULL;
    Node* tail = NULL;
    int size = 0;

    for (int i = 0; i < Q; i++) {
        int X, V;
        cin >> X >> V;

        if (insertAt(head, tail, X, V, size)) {
            printLeft(head);
            printRight(tail);
        } else {
            cout << "Invalid" << endl;
        }
    }

    return 0;
}






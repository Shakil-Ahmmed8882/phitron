


#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    string val;
    Node* next;
    Node* prev;

    Node(string val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void push_back(Node*& head, Node*& tail, string val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

string extractAddress(const string& input) {
    string keyword = "visit ";
    size_t pos = input.find(keyword);
    if (pos != string::npos) {
        return input.substr(pos + keyword.length());
    }
    return "";
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    // Input the doubly linked list
    while (true) {
        string val;
        cin >> val;
        if (val == "end") break;
        push_back(head, tail, val);
    }

    int q;
    cin >> q;
    cin.ignore(); 

    Node* current = head;

    while (q--) {
        string cmd;
        getline(cin, cmd);

        if (cmd.find("visit ") == 0) {
            string address = extractAddress(cmd);
            Node* tmp = head;
            bool found = false;
            while (tmp != NULL) {
                if (tmp->val == address) {
                    current = tmp;
                    found = true;
                    break;
                }
                tmp = tmp->next;
            }
            if (found) {
                cout << current->val << endl;
            } else {
                cout << "Not Available" << endl;
            }
        }

        else if (cmd == "next") {
            if (current->next != NULL) {
                current = current->next;
                cout << current->val << endl;
            } else {
                cout << "Not Available" << endl;
            }
        }

        else if (cmd == "prev") {
            if (current->prev != NULL) {
                current = current->prev;
                cout << current->val << endl;
            } else {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}

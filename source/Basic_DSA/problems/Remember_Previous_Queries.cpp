#include <bits/stdc++.h>
using namespace std;


void printLeft(list<int>& dll) {
    cout << "L -> ";
    for (int val : dll) {
        cout << val << " ";
    }
    cout << endl;
}

void printRight(list<int>& dll) {
    cout << "R -> ";
    for (auto it = dll.rbegin(); it != dll.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

void insertHead(list<int>& dll, int val) {
    dll.push_front(val);
}

void insertTail(list<int>& dll, int val) {
    dll.push_back(val);
}

void deleteAtIndex(list<int>& dll, int index) {
    if (index < 0 || index >= dll.size()) return;
    auto it = dll.begin();
    advance(it, index);
    dll.erase(it);
}

int main() {
    int Q;
    cin >> Q;

    list<int> dll;

    while (Q--) {
        int X, V;
        cin >> X >> V;

        if (X == 0) insertHead(dll, V);
        else if (X == 1) insertTail(dll, V);
        else if (X == 2) deleteAtIndex(dll, V);

        printLeft(dll);
        printRight(dll);
    }

    return 0;
}




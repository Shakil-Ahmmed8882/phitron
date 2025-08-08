#include <bits/stdc++.h>
using namespace std;

struct Student {
    string name;
    int roll, marks;
    Student(string n, int r, int m) : name(n), roll(r), marks(m) {}
};

struct Compare {
    bool operator()(const Student& a, const Student& b) {
        if (a.marks == b.marks)
            return a.roll > b.roll; // smaller roll first if marks tie
        return a.marks < b.marks;   // higher marks first
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    priority_queue<Student, vector<Student>, Compare> pq;

    for (int i = 0; i < n; i++) {
        string name; int roll, marks;
        cin >> name >> roll >> marks;
        pq.emplace(name, roll, marks);
    }

    int q; cin >> q;
    while (q--) {
        int cmd; cin >> cmd;

        if (cmd == 0) {
            string name; int roll, marks;
            cin >> name >> roll >> marks;
            pq.emplace(name, roll, marks);
        }
        else if (cmd == 2) {
            if (!pq.empty()) pq.pop();
        }

        // For commands 0,1,2 print top or Empty
        if (pq.empty()) {
            cout << "Empty\n";
        } else {
            const auto& top = pq.top();
            cout << top.name << " " << top.roll << " " << top.marks << "\n";
        }
    }

    return 0;
}

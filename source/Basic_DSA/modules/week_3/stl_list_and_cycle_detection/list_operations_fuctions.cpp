#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {20, 20, 30, 80, 70, 50, 10, 50};


    // l.remove(20);
    // l.remove(30);
    // l.remove(2);
    // l.sort();
    // l.sort(greater<int>());
    // l.unique();
    l.reverse();

    for (int v : l)
    {
        cout << v << endl;
    }

    return 0;
}
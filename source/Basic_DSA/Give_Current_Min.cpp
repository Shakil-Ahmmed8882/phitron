

#include <bits/stdc++.h>
using namespace std;

/*
Problem Statement:

You are given a list `A` of size `N`.
You will then be given `Q` queries, and for each query,
there will be some commands. The commands are as follows:

1. `0 X`: Insert `X` into the list.
    Then print the current minimum value from the list.
2. `1`: Print the current minimum value from the list.
3. `2`: Delete the current minimum value from the list and print
         the minimum value from the list after deletion.

Note: If the list is empty and you
      cannot print anything, you should print "Empty".

Input Format:

- The first line will contain `N`.
- The second line will contain the list `A` of size `N`.
- The third line will contain `Q`.
- The next `Q` lines will contain the commands.
*/

/*
Sample Input 0

/*
4
10 -10 -5 -20
10
1
2
2
2
2
0 10
1
2
0 20
1


Sample Output 0
-20
-10
-5
10
Empty
10
10
Empty
20
20
*/

int main()
{
    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        pq.push(val);
    }

    int t;
    cin >> t;
    while (t--)
    {
        int q;
        cin >> q;
        // insert & print
        if (q == 0)
        {
            int x; 
            cin >> x; 
            pq.push(x); 
            if(pq.empty()){
                cout << "Empty" << endl; 
            }else{
                cout << pq.top() << endl; 
            }
        }
        
  
        //  print
        else if (q == 1)
        {
            if(pq.empty())
                cout << "Empty" << endl; 
            else 
                cout << pq.top() << endl;   
        }


             // delete & print
        else if (q == 2)
        {
            if(!pq.empty())
                pq.pop(); 

            if(pq.empty())
                cout << "Empty" << endl; 
             else 
                cout << pq.top() << endl;   

        } 
    }

    return 0;
}
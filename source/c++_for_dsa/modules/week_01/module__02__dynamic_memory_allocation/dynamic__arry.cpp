
#include <bits/stdc++.h>
using namespace std;


int* p; 


void fun() {
    // int x = 20; 
    // p = &x;
    // cout << "Fun " << *p << endl; 
    int* x = new int; 
    p = x; 
    *x = 200; 
    cout << "Fun " << *p << endl; 
}



int main()
{



    // int x = 10; 
    // int *p = new int; // dynamic memory allocation
    // *p = 10; 
    //  cout << *p << endl;
    fun();
    cout << "Main " << *p << endl; 
    return 0;
}



#include <bits/stdc++.h>
using namespace std;

class MyStack {
    public: 
    vector<int> v; 
    void push(int val){
        v.push_back(val);
    }
    void pop(){
        v.pop_back();
    }

    int top(){
        return v.back();
    }

    int size(){
        return v.size();
    }
    bool empty(){
        return v.empty();
    }
};
int main()
{
    MyStack st; 
    st.push(5);
    st.push(10);
    st.push(15);
    st.push(20);


    cout << st.top() << endl; 
    st.pop();
    cout << st.top() << endl; 
    st.pop();
    cout << st.top() << endl; 
    st.pop();


    return 0;
}
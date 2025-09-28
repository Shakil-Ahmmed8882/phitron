


#include <bits/stdc++.h>
using namespace std;

// class MyStack {
//     public: 
//     vector<int> v; 
//     void push(int val){
//         v.push_back(val);
//     }
//     void pop(){
//         v.pop_back();
//     }

//     int top(){
//         return v.back();
//     }

//     int size(){
//         return v.size();
//     }
//     bool empty(){
//         return v.empty();
//     }
// };



class Node {
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};





class MyStack{
    public: 
    Node* head; 
    Node* tail; 
    int sz; 
    void push(int val){
        sz++; 
        Node* newNode = new Node(val);  
        if(!head){
            head = newNode; 
            tail = newNode; 
            return; 
        }
        tail->next = newNode; 
        tail = tail->next; 
    }
    void pop(){
        sz--; 
        Node* dn = tail; 
        tail = dn->prev; 
        delete dn; 
        if(tail == NULL){
            head = NULL; 
        }
        tail->next = NULL ; 
    }
    int top(){
        return tail->val; 
    }
    int size(){
        return sz; 
    }
    bool empty(){
        return head == NULL ; 
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
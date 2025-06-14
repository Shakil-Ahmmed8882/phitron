#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    string s; 
    getline(cin, s); 
    stringstream ss(s); 
    string word; 

    bool is_Jessica_found=false; 
    while (ss >> word)
    {
        if(word == "Jessica"){
            is_Jessica_found = true; 
        }
    }
    

    if(is_Jessica_found){
        cout << "YES";
    }else{
        cout << "NO";
    }


    return 0;
}
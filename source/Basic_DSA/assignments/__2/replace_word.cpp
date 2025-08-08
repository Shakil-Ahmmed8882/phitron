#include <bits/stdc++.h>
using namespace std;
int main()
{
    

    int t; 
    cin >> t; 
    cin.ignore(); 

    while(t--){
        string line; 
        getline(cin, line); 
        
        stringstream ss(line); // rahimisagoodguy good
        string s,x; // s = rahimisagoodguy  // x = good
        ss >> s >> x;         

        size_t postition = 0; 
        while((postition = s.find(x, postition)) != string::npos){
            s.replace(postition, x.size(), "#"  ); 
            postition++; 
        }
        cout << s << endl; 
    }



    return 0;
}
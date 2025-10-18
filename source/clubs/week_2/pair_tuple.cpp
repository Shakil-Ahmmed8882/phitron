
#include <bits/stdc++.h>
using namespace std;


int main()
{

    // fast io
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // pair<string, string> p = make_pair("Name: ", "Shakil"); 
    // pair<string, string> p = {"Nationality:", " Bangladeshi" };
    // pair<string, string> p = {"Nationality a:", " Bangladeshi b" };
    // p.first = "updated name";    
    // auto [a, b] = p; 

     
    
    // int n ; 
    // cin >> n; 

    // pair<string, string> array[n];

    // for(int i = 0; i < n; i++){
    //     string a , b ; 
    //     cin >> array[i].first >> array[i].second;
    // }

    // for(auto [name, val] : array){
    //     cout << name << " " << val << "\n";
    // }


    // tuple<string, int, string> t = make_tuple("Shakil", 01, "0130"); 
    tuple<string, int, string, int> t = make_tuple("Shakil", 01, "0130", 188382180); 

    auto [name, roll, phone1, phone2] = t; 
    cout << name << " "  << roll << " " << phone1 << " " << phone2 << endl;
    // cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << " " << get<3>(t) << endl;



    
    return 0;
}

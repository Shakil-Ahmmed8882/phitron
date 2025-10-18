#include <bits/stdc++.h>
using namespace std;

#define nl cout << "\n"

int main()
{

    // fast io
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // map<int, int> mp;
    // mp.insert({1, 2});
    // map<string, string> mp;
    // mp.insert({"name", "Shakil"});

    map<string, int> mp;
    mp["a"] = 1;
    mp["b"] = 2;
    mp["c"] = 3;
    mp["d"] = 4;
    mp["f"] = 10;
    

    // for(auto [key, value]:mp){
    //     cout << key << " " << value << " \n";
    // }

    // auto it = mp.find("three");
    // cout << it->first << " " << it->second << "\n";
    //     for(auto it :mp){
    //     string key = it.first;
    //     int value = it.second;
    //     cout << key << " " << value << " \n";
    // }

    // for (auto it : mp)
    // {
    //     string key = it.first;
    //     int value = it.second;
    //     cout << key << " " << value << " \n";
    // }
    // auto it = mp.find("five");

    // if (it == mp.end())
    // {
    //     cout << "Not found\n";
    // }
    // else
    // {
    //     cout << it->first << " " << it->second << "\n";
    // }

    // cout << mp["somthing"] << "\n";
    // cout << mp["somthing else"] << "\n";

    // for (auto it : mp)
    // {
    //     string key = it.first;
    //     int value = it.second;
    //     cout << key << " " << value << " \n";
    // }
    
    // cout << "\n"; 
    // cout << "\n"; 
    
    
    // auto it = mp.find("b"); 
    // if(it != mp.end()){
    //     mp.erase(it);
    // }
    
    for (auto it : mp)
    {
        string key = it.first;
        int value = it.second;
        cout << key << " " << value << " \n";
    }


    nl;
    // auto it  = mp.begin(); 
    // it++; 
    // it++; 
    // it++; 

    // auto it = mp.rbegin();
    // --it; 

    // mp["e"] = 5;
    //  auto it = mp.lower_bound("e"); // => 

    auto it = mp.upper_bound("c"); 

    cout << it->first << " " << it->second << "\n";

    return 0;
}

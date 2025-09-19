

// #include <bits/stdc++.h>
// using namespace std;


// void reverse_num(vector<int> a, int i){  // bad in memory complexity

//     if(i < 0) return; 
//     cout << a[i] << " " ; 
//     reverse_num(a, i - 1); 
// }

// int main()
// {
//     int n; 
//     cin >> n; 
//     vector<int> v; 
//     for(int i = 0; i < n; i++){
//         int x; 
//         cin >> x; 
//         v.push_back(x); 
//     }

//     reverse_num(v, n -1); 


//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n; 
    cin >> n; 
    vector<int> v; 
    
    for(int i = 0; i < n; i++){ // on 
        int x; 
        cin >> x; 
        v.push_back(x); 
    }

    // reverse(v.begin(), v.end()); 
    for(int i = 0, j = n -1; i < j; i++, j--){
     swap(v[i], v[j]); 
    }

    for(int i = 0; i < n; i++){
     cout << v[i] << " " ; 
    }


    return 0;
}
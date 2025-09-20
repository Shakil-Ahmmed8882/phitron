#include <bits/stdc++.h>
using namespace std;

// step 1; sort
// step 2: set left  & right pointers
// step 3: find mid
// step 4: update l & r if arr[mid] !== x

int main()
{

    vector<int> arr = { 1,  5,  10,  15,  20,  25};
    int x = 10; 
    int n  =  arr.size(); 
    int l = 0, r = n - 1;

    
    bool found = false;
    while (l <= r)
    {
        int mid = (l + r) / 2; 
        if(arr[mid] == x){
            found = true; 
            break; 
        } else if(x < arr[mid]){
            r = mid -1; 
        } else{
            l = mid + 1; 
        }
    }
    cout << (found ? "found\n" : "not found\n");
    

}

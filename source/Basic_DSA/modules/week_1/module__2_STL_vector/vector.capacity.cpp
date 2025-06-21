#include <bits/stdc++.h> // Includes all standard C++ libraries
using namespace std;

int main()
{
    vector<int> v; // Create an empty vector of integers

    // v.size(): Returns the number of elements in the vector
    // Time Complexity: O(1)
    cout << v.size() << endl; // Output: 0 (vector is empty)

    // v.push_back(): Adds element at the end of the vector
    // Time Complexity: Amortized O(1)
    v.push_back(10); // Vector becomes: [10]
    v.push_back(20); // Vector becomes: [10, 20]
    v.push_back(30); // Vector becomes: [10, 20, 30]

    cout << v.size() << endl; // Output: 3 (3 elements now)

    // v.empty(): Returns true (1) if vector is empty, false (0) if not
    // Time Complexity: O(1)
    cout << "empty: " << v.empty() << endl; // Output: 0 (false, it's not empty)

    // v.resize(n): Changes the size of the vector to n
    // If new size is smaller → elements are removed
    // If new size is bigger → new elements are added with default value (0)
    // Time Complexity: O(K) where K is the number of elements added/removed

    v.resize(1); // Shrink vector to size 1 → vector becomes: [10]
    v.resize(4, 9); // Increase size to 4, fill new spots with 9 → [10, 9, 9, 9]

    // Loop to print all elements
    for(int i = 0 ; i < v.size(); i++) {
        cout << v[i] << " "; // Output: 10 9 9 9
    }

    return 0;
}

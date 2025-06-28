#include <iostream>
#include <vector>
#include <numeric> 
using namespace std;

int main()
{
    int n;
    cin >> n;
    // arr =  {1, 3, 5, 2, 2}
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int total_sum = accumulate(arr.begin(), arr.end(), 0);
    // total_sum = 1 + 3 + 5 + 2 + 2 = 13
    int left_sum = 0;

    for (int i = 0; i < n; i++)
    {
        int right_sum = total_sum - left_sum - arr[i];
        //   total_sum - left_sum - arr[i] = 13 - 0 - 1 = 12

        if (left_sum == right_sum)
        {
            cout << i << endl;
            return 0;
        }

        left_sum += arr[i];
        //  first left_sum = 0
        // Then adds arr[0]
        // Then adds arr[1]
        // Then adds arr[2]
    }

    cout << "No equilibrium index found" << endl;
    return 0;
}

/*
_______ Iteration 0 (i = 0)arr[i] = 1
        left_sum = 0 (nothing on left of index 0)
        right_sum = total_sum - left_sum - arr[i] = 13 - 0 - 1 = 12
        left_sum != right_sum → continue
        Now update: left_sum += arr[i] = 0 + 1 = 1

_______ Iteration 1 (i = 1) arr[i] = 3
        left_sum = 1 (only element before index 1 is 1)
        right_sum = 13 - 1 - 3 = 9
        Not equal → continue
        Update: left_sum = 1 + 3 = 4


_______ Iteration 2 (i = 2) arr[i] = 5
        left_sum = 4 (1 + 3)
        right_sum = 13 - 4 - 5 = 4


_______ MATCH FOUND: left_sum == right_sum
        So, equilibrium index is 2

*/
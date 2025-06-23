#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Commonly used with STL algorithms like sort, for_each, etc.

int  main() {
    vector<int> nums = {3, 1, 4, 1, 5, 9};

    sort(nums.begin(), nums.end(), [](int a, int b) {
        // cout << "a: " << a << endl;

        // cout << "b: " << b << endl;
        return a > b; // Sort in descending order
    });
    // nums = {9, 5, 4, 3, 1, 1}

    for (int i = 0; i < 6; i++) {
        cout << nums[i] << " ";    // 9 5 4 3 1 1 
    } 

    cout << endl;

    for_each(nums.begin(), nums.end(), [](int x) {
        cout << x * 2 << " "; // Output: 18 10 8 6 2 2
    });

    return 0;
}
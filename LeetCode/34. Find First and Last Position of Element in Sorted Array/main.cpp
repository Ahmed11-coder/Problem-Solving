#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Level: Medium
// Topics : Binary Search

// My Code
vector<int> searchRange(vector<int>& nums, int target) {
    vector<int> result = {-1, -1};

    if (nums.size() != 0){
        int upper = upper_bound(nums.begin(), nums.end(), target) - nums.begin() - 1;
        int lower = lower_bound(nums.begin(), nums.end(), target) - nums.begin();

        if ((upper >= 0 && upper < nums.size() ) && nums[upper] == target) result[1] = upper;
        if ((lower >= 0 && lower < nums.size()) && nums[lower] == target) result[0] = lower;

    }

    return result;
}

int main() {

    // Test Case 1 & 2
    //vector<int> nums = {5,7,7,7,8,8,10};

    // Test Case 3
    vector<int> nums = {};

    //vector<int> result = searchRange(nums, 7);
    //vector<int> result = searchRange(nums, 6);
    vector<int> result = searchRange(nums, 0);

    for(int num : result) {
        cout << num << " ";
    }

    cout << endl;

    return 0;
}

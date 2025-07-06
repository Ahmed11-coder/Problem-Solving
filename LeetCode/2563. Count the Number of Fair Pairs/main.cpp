#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Level : Medium
// Topics : Array , Two Pointer , Binary Search , Sorting

// You Can Also Use lower_bound and upper_bound Build-in Functions

// Using Two Pointer Approach
long long countFairPairs(vector<int>& nums, int lower, int upper) {
    sort(nums.begin(), nums.end());

    int left = 0;
    int right = nums.size() - 1;
    long long counter = 0;

    while(left < right) {
        if (nums[left] + nums[right] <= upper) {
            counter += (right - left);
            left++;
        }else right--;
    }

    left = 0;
    right = nums.size() - 1;

    while(left < right) {
        if (nums[left] + nums[right] < lower) {
            counter -= (right - left);
            left++;
        }else right--;
    }

    return counter;
}

int main() {

    vector<int> nums = {0,1,7,4,4,5}; // 0, 1, 4, 4, 5, 7
    cout << "Find In Index : " << countFairPairs(nums, 1, 1) << endl;

    return 0;
}

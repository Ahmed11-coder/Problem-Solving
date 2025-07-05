#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
#define FAST ios::sync_with_stdio(false);cout.tie(nullptr);cin.tie(nullptr);

// Level : 1000
// Topics : brute force, data structures

int main() {
    FAST;

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> nums(n);

        for(int& num : nums) cin >> num;

        int left = 0, right = n - 1;
        int minValue = INT_MAX, maxValue = INT_MIN;
        string result(n, '0');

        while (right >= 0 && left < n) {

            if (nums[left] < minValue) {
                result[left] = '1';
                minValue = nums[left];
            }

            if (nums[right] > maxValue) {
                result[right] = '1';
                maxValue = nums[right];
            }

            right--;
            left++;
        }

        cout << result << endl;
    }

    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdint>
using namespace std;
#define FAST ios::sync_with_stdio(false);cout.tie(nullptr);cin.tie(nullptr);

// Level : 1100
// Topics : brute force, greedy, two pointers

int main() {
    FAST;

    int n; cin >> n;
    while(n--) {
        int numsSize; cin >> numsSize;
        vector<int> nums(numsSize);

        for(int i = 0; i < numsSize; i++) cin >> nums[i];

        int left = 0, right = 0;
        int64_t result = LLONG_MAX;
        while(right <= numsSize-1) {
            result = min(result , (int64_t)left*nums[left] + (int64_t)(numsSize - right - 1)*nums[right]);

            right++;
            if (right < numsSize && nums[left] != nums[right]) left = right;
        }
        cout << result << endl;
    }

    return 0;
}

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
#define FAST ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

// Level : Medium
// Topics : Array , Hash Table , Design

// My Code
class FindSumPairs {
unordered_map<int, int> myNums1_freq;
vector<int> myNums2;
unordered_map<int, int> myNums2_freq;

public:
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        for(int num : nums1) myNums1_freq[num]++;
        myNums2 = nums2;
        for(int num : nums2) myNums2_freq[num]++;
    }

    void add(int index, int val) {
        myNums2_freq[myNums2[index]]--;
        myNums2[index] += val;
        myNums2_freq[myNums2[index]]++;
    }

    int count(int tot) {
        int counter = 0;
        for(auto num : myNums1_freq) {
           counter += myNums2_freq[tot - num.first] * num.second;
        }
        return counter;
    }
};

// Another Solution
/*
class FindSumPairs {
    unordered_map<int, int> myNums2_freq;
    vector<int> myNums1, myNums2;

public:
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        myNums1 = nums1;
        myNums2 = nums2;
        for(int num : nums2) myNums2_freq[num]++;
    }

    void add(int index, int val) {
        myNums2_freq[myNums2[index]]--;
        myNums2[index] += val;
        myNums2_freq[myNums2[index]]++;
    }

    int count(int tot) {
        int counter = 0;
        for(int num : myNums1) {
           counter += myNums2_freq[tot - num];
        }
        return counter;
    }
};
*/
int main() {
    FAST;
    vector<int> nums1 = {1, 1, 2, 2, 2, 3};
    vector<int> nums2 = {1, 4, 5, 2, 5, 4};

    FindSumPairs n(nums1, nums2);
    cout << "Counter of 7 Is : " << n.count(7) << endl;
    n.add(3, 2);
    cout << "Counter of 8 Is : " << n.count(8) << endl;
    n.add(0, 1);
    n.add(1, 1);
    cout << "Counter of 7 Is : " << n.count(7) << endl;

    return 0;
}

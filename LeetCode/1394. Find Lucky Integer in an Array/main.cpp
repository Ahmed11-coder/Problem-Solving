#include <iostream>
#include <map>
#include <vector>
using namespace std;

int findLucky(vector<int>& arr) {

    map<int, int> freq;

    for(int num : arr) freq[num]++;

    int maxFreq = INT_MIN;
    for(auto num: freq) {
        if (num.first == num.second && num.first > maxFreq) maxFreq = num.first;
    }

    return (maxFreq == INT_MIN ? -1 : maxFreq) ;
}

int main() {

    // Test Case 1
    //vector<int> nums = {2,2,3,4};

    // Test Case 2
    //vector<int> nums = {1,2,2,3,3,3};

    // Test Case 3
    vector<int> nums = {2,2,2,3,3};
    int result = findLucky(nums);

    cout << "Result : " << result << endl;

    return 0;
}

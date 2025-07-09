#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

// Level : Easy
// Topics : String, Simulation

// My Code
vector<string> divideString(string s, int k, char fill) {
    int n = ceil((double)s.size() / k);
    vector<string> result(n);
    for (int i = 0, j = 0; i < n*k; i++) {
        if (i >= s.size()) result[j] += fill;
        else result[j] += s[i];

        if ((i + 1) % k == 0) j++;
    }

    return result;
}

int main() {

    vector<string> result = divideString("abcdefghij", 3, 'x');

    for(string s : result) {
        cout << s << " ";
    }
    cout << endl;

    return 0;
}

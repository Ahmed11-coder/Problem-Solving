#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define FAST ios::sync_with_stdio(false);cout.tie(nullptr);cin.tie(nullptr);

int main() {
    FAST;
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        vector<int> b(n);

        for(int &num : a) cin >> num;
        for(int &num : b) cin >> num;

        if (std::equal(a.begin(), --a.begin() + n, b.begin())|| std::equal(a.rbegin(), --a.rend(), b.begin())) {
            cout << "Bob" << endl;
        }else {
            cout << "Alice" << endl;
        }
    }

    return 0;
}

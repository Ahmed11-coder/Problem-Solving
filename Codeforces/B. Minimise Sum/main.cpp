#include <bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(false);cout.tie(nullptr);cin.tie(nullptr);

int main() {
    FAST;
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);

        for(int& num : a) cin >> num;
        cout << min(a[0] + a[1], 2 * a[0]) << endl;
    }

    return 0;
}

// 3
// 2
// 1 2 => 2
// 3
// 1 2 3 => 2
// 4
// 3 0 2 3 => 3

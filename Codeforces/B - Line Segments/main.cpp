#include <bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(false);cout.tie(nullptr);cin.tie(nullptr);

long long sq(int x) {
    return (long long) x * x;
}

int main() {
    FAST;
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int px, py, qx, qy; cin >> px >> py >> qx >> qy;
        long long d = sq((px - qx)) + sq((py - qy));
        vector<int> arr(n);
        int maxNum = 0;
        for(int i = 0; i < n;i++) {
            cin >> arr[i];
            if (arr[i] >= arr[maxNum]) maxNum = i;
        }

        long long x = arr[maxNum], s = 0;
        for(int i = 0; i < n; i++) {
            if (i != maxNum) x -= arr[i];
            s += arr[i];
        }

        x = ((x < 0) ? 0 : x);
        if (sq(s) >= d && sq(x) <= d) {
            cout << "Yes\n";
        }else {
            cout << "No\n";
        }
    }

    return 0;
}

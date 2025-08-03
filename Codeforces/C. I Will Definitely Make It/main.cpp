#include <bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(false);cout.tie(nullptr);cin.tie(nullptr);

int main() {
    FAST;
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        vector<int> h(n);
        for(int& hi : h) cin >> hi;

        vector<int> sortedH = h;
        sort(sortedH.begin(), sortedH.end());


        int i = find(sortedH.begin(), sortedH.end(), h[k-1]) - sortedH.begin();
        int j = i + 1, x = 0;
        bool flag = true;

        while(sortedH[i] != sortedH[n-1]) {
            int value = sortedH[j] - sortedH[i];
            if (value) {
                x += value;
                if (x > sortedH[i]) {
                    flag = false;
                    break;
                }
                i = j;
            }
            j++;
        }

        cout << (flag ? "Yes" : "No") << endl;
    }
    return 0;
}

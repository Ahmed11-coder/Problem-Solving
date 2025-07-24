#include <bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(false);cout.tie(nullptr);cin.tie(nullptr);

int main() {
    FAST;
    int t; cin >> t;
    while(t--) {
        string num; cin >> num;

        int y = 10;
        for(int i = 0; i < num.size(); i++) {
            if (y > (num[i] - '0')) y = (num[i] - '0');
        }

        cout << y << endl;
    }
    return 0;
}

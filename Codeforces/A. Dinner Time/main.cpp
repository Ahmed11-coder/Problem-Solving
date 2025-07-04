#include <iostream>
using namespace std;
#define FAST ios::sync_with_stdio(false);cout.tie(nullptr);cin.tie(nullptr);

// Level : 900
// Topics : math, constructive algorithms

int main() {

    int t; cin >> t;
    while(t--) {
        int n, m, p, q; cin >> n >> m >> p >> q;

        if (n == p) {
            cout << ((q == m) ? "Yes" : "No") << endl;
            continue;
        }

        if (n % p == 0) cout << (((n/p)*q == m) ? "Yes" : "No") << endl;
        else cout << "Yes" << endl;
    }

    return 0;
}

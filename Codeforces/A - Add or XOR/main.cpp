#include <bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(false);cout.tie(nullptr);cin.tie(nullptr);

int main() {
    FAST;
	int t; cin >> t;
	while(t--) {

	    int a, b, x, y; cin >> a >> b >> x >> y;

	    if (a == b) {
	        cout << 0 << endl;
	    } else if (a > b && ( a % 2 == 1 && a - 1 == b)) {
	        cout << y << endl;
	    } else if ( a < b) {
	        int minValue = min(x, y);
	        int times = (b - a)/2;
	        if (((b - a)%2 == 1) && (a%2 == 0)) times++;

	        int result = (minValue * times) + ( b - a - times) * x;
	        cout << result << endl;
	    }else {
	        cout << -1 << endl;
	    }

	}

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int formula(int volume, int rate_of_pool, int rate_of_leave) {
    int ans = (volume*rate_of_leave)/(rate_of_pool-rate_of_leave);

    return ans;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int v, rp, rl;
        cin >> v >> rp >> rl;

        cout << formula(v, rp, rl) << "\n";
    }

    return 0;
}
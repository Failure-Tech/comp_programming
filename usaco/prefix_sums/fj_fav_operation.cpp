#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.in", "r", stdin);
    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;

        vector<int> bore(N+1);
        for (int i = 1; i <= N; i++) {
            int x;
            cin >> x;
            bore[i] = bore[i-1] + (x % M);
        }

        int ans = 1e9;
        for (int i = 1; i <= N; i++) {
            if (bore[i]-bore[i-1] > 0) {
                ans = min(ans, bore[i]-bore[i-1]);
            }
        }

        int operations = 0;
        for (int i = 1; i <= N; i++) {
            if ((bore[i] % M) <= abs(bore[i] % M - M)) {
                operations += abs((bore[i] % M) - ans);
            }
            else {
                operations += abs((bore[i] % M - M) - ans);
            }
        }

        cout << operations << "\n";
    }
}
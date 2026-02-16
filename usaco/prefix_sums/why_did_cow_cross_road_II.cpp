#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("maxcross.in", "r", stdin);
    freopen("maxcross.out", "w", stdout);

    int N, K, B;
    cin >> N >> K >> B;

    vector<int> signals(N);
    for (int i = 0; i < B; i++) {
        int x;
        cin >> x;
        signals[x-1] = 1;
    }

    for (int i = 1; i < N; i++) {
        signals[i] += signals[i-1];
    }

    // smallest subseq of length k
    int ans = 1e5 + 1;
    for (int i = 0; i < N - K + 1; i++) {
        ans = min(ans, signals[i+K-1]-signals[i]);
        // cout << ans << " ";
    }

    cout << ans;
}
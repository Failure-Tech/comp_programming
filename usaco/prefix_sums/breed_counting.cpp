#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("bcount.in", "r", stdin);
    freopen("bcount.out", "w", stdout);

    int N, Q;
    cin >> N >> Q;

    vector<int> H(N+1);
    vector<int> G(N+1);
    vector<int> J(N+1);

    for (int i = 1; i <= N; i++) {
        int x;
        cin >> x;

        if (x == 1) {
            H[i] = 1;
        }
        else if (x == 2) {
            G[i] = 1;
        }
        else if (x == 3) {
            J[i] = 1;
        }
    }

    for (int i = 1; i <= N; i++) {
        H[i] += H[i-1];
        G[i] += G[i-1];
        J[i] += J[i-1];
    }

    for (int i = 0; i < Q; i++) {
        int a, b;
        cin >> a >> b;

        cout << H[b] - H[a-1] << " " << G[b] - G[a-1] << " " << J[b] - J[a-1] << "\n";
    }

    return 0;
}
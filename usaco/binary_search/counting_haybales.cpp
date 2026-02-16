#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    // freopen("haybales.in", "r", stdin);
    // freopen("haybales.out", "w", stdout);
    freopen("input.in", "r", stdin);
    int N, Q;
    cin >> N >> Q;

    vector<ll> haybale(N);
    for (int i = 0; i < N; i++) {
        cin >> haybale[i];
    }

    sort(haybale.begin(), haybale.end());

    for (int i = 0; i < Q; i++) {
        ll A, B;
        cin >> A >> B;

        int ans = upper_bound(haybale.begin(), haybale.end(), B) - lower_bound(haybale.begin(), haybale.end(), A);
        cout << ans << "\n";
    }

    return 0;
}
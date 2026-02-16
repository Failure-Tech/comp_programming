#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool timeProducts(ll time, vector<ll> times, ll products) {
    // at this tie, can you make x amt of products
    ll ans = 0;
    for (ll machine: times) {
        ans += floor(time/machine);
        if (ans >= products) {
            return true;
            break;
        }
    }

    return false;
}

int main() {
    // freopen("input.in", "r", stdin);

    ll N, P;
    cin >> N >> P;

    vector<ll> times(N);
    for (int i = 0; i < N; i++) cin >> times[i];

    ll lo = 0; 
    ll hi = LLONG_MAX, ans = LLONG_MAX;
    while (lo <= hi) {
        ll mid = lo + (hi-lo)/2;
        if (timeProducts(mid, times, P)) {
            ans = min(ans, mid);
            hi = mid-1;
        }
        else {
            lo = mid+1;
        }
    }

    cout << ans << "\n";

    return 0;
}
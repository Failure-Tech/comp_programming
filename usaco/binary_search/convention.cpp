#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.in", "r", stdin);
    int N, M, C;
    cin >> N >> M >> C;

    vector<int> times(N);
    for (int i = 0; i < N; i++) cin >> times[i];

    sort(times.begin(), times.end());

    int ans = 0;
    for (int i = 0; i < ceil(N/M); i++) {
        if (i*C + C-1 <= N) {
            cout << i*C << " " << i*C + C-1 << "\n";
            ans = max(ans, times[i*C + C-1]-times[i*C]);
        }
        else {
            break;
        }
    }

    cout << ans;

    return 0;
}
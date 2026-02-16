#include <bits/stdc++.h>
using namespace std;

int check(vector<int> cows, int K, int t) {
    priority_queue<int> pq;
    int lastTime = 0;
    for (int i = 0; i < cows.size(); i++) {
        if (pq.size() == K) {
            lastTime = pq.top();
            pq.pop();
        }
        if (lastTime + cows[i] > t) {
            return false;
        }
        pq.push(lastTime + cows[i]);
    }

    return true;
}

int main() {
    freopen("input.in", "r", stdin);
    int N, Tmax;
    cin >> N >> Tmax;

    vector<int> cows(N);
    for (int i = 0; i < N; i++) cin >> cows[i];

    int lo = 1, hi = N;
    int ans = N;
    while (lo <= hi) {
        int mid = lo + (hi-lo)/2;
        cout << mid << " " << check(cows, mid, Tmax) << "\n";
        if (check(cows, mid, Tmax)) {
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
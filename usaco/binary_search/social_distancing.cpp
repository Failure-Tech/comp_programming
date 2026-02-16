#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool check(vector<pair<ll, ll>> grass, ll distance, int numCows) {
    // idea: check each interval of grass, optimally place them as far left as possible
    // when the interval is too small to place any cows, check next interval
    int index = 0;
    ll current = grass[0].first;
    while (current+distance <= grass[grass.size()-1].second) {
        while (current + distance > grass[index].second) {
            index++;
        }
        current = max(grass[index].first, current+distance);
        numCows--;
        if (numCows == 0) {break;}
    }
}

int main() {
    freopen("input.in", "r", stdin);
    int N, M;
    cin >> N >> M;

    vector<pair<ll, ll>> grass(M);
    for (int i = 0; i < M; i++) cin >> grass[i].first >> grass[i].second;

    sort(grass.begin(), grass.end());

    ll lo = 1, hi = grass[M-1].second - grass[M].first + 1;
    while (lo <= hi) {
        ll mid = lo + (hi-lo)/2;
        if (check(grass, mid, N)) {
            lo = mid;
        }
        else {
            hi = mid-1;
        }
    }

    cout << lo << "\n";
    return 0;
}
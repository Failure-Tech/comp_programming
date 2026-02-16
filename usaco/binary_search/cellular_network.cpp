#include <bits/stdc++.h>
using namespace std;

int check(vector<int> towers, int currCity) {
    int lo = 0, hi = towers.size()-1;
    int res = towers[0];

    while (lo <= hi) {
        int mid = lo + (hi-lo)/2;

        if (abs(towers[mid] - currCity) < abs(res-currCity)) {
            res = towers[mid];
        }
        else if (abs(towers[mid] - currCity) == abs(res-currCity)) {
            res = max(res, towers[mid]);
        }

        if (towers[mid] == currCity) {
            return towers[mid];
        }
        else if (towers[mid] < currCity) {
            lo = mid+1;
        }
        else {
            hi = mid-1;
        }
    }

    return res;
}

int main() {
    // freopen("input.in", "r", stdin);
    int N, M;
    cin >> N >> M;

    vector<int> cities(N);
    vector<int> towers(M);
    for (int i = 0; i < N; i++) {
        cin >> cities[i];
    }
    for (int i = 0; i < M; i++) {
        cin >> towers[i];
    }

    int ans = 0;
    for (int i = 0; i < N; i++) {
        int tower = check(towers, cities[i]);
        ans = max(ans, abs(cities[i]-tower));
        // cout << tower << " " << cities[i] << " " << ans << "\n";
    }

    // return ans;

    cout << ans;

    return 0;
}
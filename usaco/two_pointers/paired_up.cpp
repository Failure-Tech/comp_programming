#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("pairup.in", "r", stdin);
    freopen("pairup.out", "w", stdout);

    int n;
    cin >> n;

    vector<pair<int, int>> cows(n);

    for (int i = 0; i < n; i++) {
        cin >> cows[i].first >> cows[i].second;
    }
    
    sort(cows.begin(), cows.end(), [](auto &a, auto &b) {
        return a.second < b.second;
    });

    int left = 0;
    int right = n-1;
    int ans = 0;
    while (left < right) {
        ans = max(ans, cows[left].second + cows[right].second);
        if (cows[left].first < cows[right].first) {
            cows[right].first -= cows[left].first;
            cows[left].first = 0;
            left++;
        }
        else if (cows[right].first < cows[left].first) {
            cows[left].first -= cows[right].first;
            cows[right].first = 0;
            right--;
        }
        else {
            cows[left].first = 0;
            cows[right].first = 0;
            left++, right--;
        }
    }

    if (left == right && cows[left].first > 0) {
        ans = max(ans, cows[left].second * 2);
    }

    cout << ans;

    return 0;
}
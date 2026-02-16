#include <bits/stdc++.h>
using namespace std;

bool findR(int numCows, vector<int> haybales, int x) {
    int cowsRequired = 0;
    for (int i = 0; i < haybales.size();) {
        cowsRequired++;
        int range = haybales[i] + 2*x;
        int j = i;
        while (j < haybales.size() && haybales[j] <= range) {
            j++;
        }
        i++;
        i = max(i, j);
    }

    return cowsRequired <= numCows;
}

int main() {
    freopen("angry.in", "r", stdin);
    freopen("angry.out", "w", stdout);
    // freopen("input.in", "r", stdin);
    int N, K;
    cin >> N >> K;

    vector<int> haybales(N);
    for (int i = 0; i < N; i++) {
        cin >> haybales[i];
    }
    sort(haybales.begin(), haybales.end());

    int lo = 0, high = 1e6-1, ans = 1e6-1;
    while (lo <= high) {
        int mid = lo + (high - lo)/2;
        if (findR(K, haybales, mid)) {
            ans = min(ans, mid);
            high = mid-1;
        }
        else {
            lo = mid+1;
        }
    }

    cout << ans << "\n";
}
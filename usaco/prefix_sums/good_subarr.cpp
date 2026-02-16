#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    freopen("input.in", "r", stdin);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        string nums;
        cin >> nums;

        vector<int> subarr;
        subarr.push_back(0);

        for (const char &c : nums) {
            subarr.push_back(c - '0');
        }

        for (int i = 1; i <= N; i++) {
            subarr[i] += subarr[i-1];
        }

        // actual sol here => unable to get
        map<int, ll> dist;
        for (int i = 0; i <= N; i++) {
            dist[subarr[i] - i]++; // calculating prefix[i] - i in a map
        }

        ll good_arrs = 0;
        for (const auto &[key, val] : dist) {
            good_arrs += (val * (val-1))/2;
        }

        cout << good_arrs << "\n";
    }
}
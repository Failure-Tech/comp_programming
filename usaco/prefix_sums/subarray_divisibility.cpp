// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;

// int main() {
//     // freopen("input.in", "r", stdin);

//     int N;
//     cin >> N;

//     vector<ll> values(N+1, 0);
//     for (int i = 1; i <= N; i++) {
//         ll x;
//         cin >> x;
//         values[i] = (values[i-1] + x) % N;
//     }

//     values.erase(values.begin());
//     // 3 4 1 3 2
//     unordered_map<ll, ll> count;
//     for (ll v: values) {
//         count[v]++;
//     }

//     ll ans = 0;

//     for (auto& [k, v]: count) {
//         if (v > 1) {
//             ans += (v*(v-1))/2;
//         }
//     }

//     cout << ans;

//     return 0;
// }

#include <iostream>
#include <vector>

using namespace std;

/**
 * @author Qi Wang
 * (detemplifying courtesy of Kevin Sheng)
 */
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;

	vector<long long> M(N);
	long long psums = 0;
	M[psums] = 1;
	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		psums += a;
		// Remember to account for negative sums
		M[(psums % N + N) % N]++;
	}

	long long ans = 0;
	for (long long x : M) {
		/*
		 * Calculating the # of pairs.
		 * This calculates the pairs without
		 * duplicates and reverse groups.
		 */
		ans += x * (x - 1) / 2;
	}
	cout << ans << endl;
}
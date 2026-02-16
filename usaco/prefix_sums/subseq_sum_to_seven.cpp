#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
	freopen("div7.in", "r", stdin);
	freopen("div7.out", "w", stdout);

	int N;
	cin >> N;

	vector<ll> prefix(N+1);
	for (int i = 1; i <= N; i++) {
		ll x;
		cin >> x;
		prefix[i] = (prefix[i-1]+x) % 7;
	}

	int maximum = 0;

	vector<int> first(7, -1);

	for (int i = 0; i < N; i++) {
		if (first[prefix[i]] == -1) {
			first[prefix[i]] = i;
		}
		else {
			maximum = max(i-first[prefix[i]], maximum);
		}
	}
	cout << maximum;
}
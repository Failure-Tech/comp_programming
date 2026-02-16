#include <bits/stdc++.h>
using namespace std;

int find_smallest_initial(vector<int> arr, int T, int K) {
    int min_index = T;
    int window_sum = 0;

    for (int i = 0; i < K; i++) {
        window_sum += arr[i];
    }

    if (window_sum >= K) {
        return 1;
    }

    for (int i = K; i < T; i++) {
        window_sum += arr[i] - arr[i-K];
        // cout << window_sum << " ";
        if (window_sum >= K) {
            min_index = min(min_index, i-K+1);
            // cout << min_index << " " << i-K+1 << " " << window_sum << "\n";
        }
    }

    return min_index+1;
}

int main() {
    // freopen("input.in", "r", stdin);
    
    int N, T, K;
    cin >> N >> T >> K;

    vector<int> arr(T);
    double n = 67*N/100;
    // cout << n << " ";
    for (int i = 0; i < T; i++) {
        int x;
        cin >> x;

        if (x >= floor((67*N+99)/100)) {
            arr[i] = 1;
        }
        else {
            arr[i] = 0;
        }

        // cout << arr[i] << " ";
    }

    // so it must be >=1, find the first contiguous block, return first value of window
    int ans = find_smallest_initial(arr, T, K);
    if (ans >= T) {
        cout << -1 << "\n";
    }
    else {
        cout << ans << "\n";
    }

    return 0;
}
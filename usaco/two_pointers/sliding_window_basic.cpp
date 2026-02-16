#include <bits/stdc++.h>
using namespace std;

// Fixed-size "window" technqiue
int fixed_size_max_subarr_sum_example(vector<int> &subarr, int n, int k) {
    int max_sum = INT_MIN;
    int window_sum = 0;
    for (int x: subarr) {
        window_sum += x;
    }
    for (int i = k; i < n; i++) {
        window_sum += subarr[i] - subarr[i-k];
        max_sum = max(max_sum, window_sum);
    }

    return max_sum;
}

// Variable-size "window" technique
int var_size_smallest_subarr_with_sum(vector<int> &subarr, int n, int x) {
    int min_len = INT_MAX;
    int start = 0, end = 0, curr_sum = 0;

    while (end < n) {
        curr_sum += subarr[end++]; // add elements to window
        while (curr_sum > x) {
            min_len = min(min_len, end-start);
            curr_sum -= subarr[start++];
        }
    }
    return (min_len == INT_MAX) ? -1 : min_len;
}
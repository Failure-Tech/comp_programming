#include <bits/stdc++.h>
using namespace std;

vector<int> computeLongestSubarr(vector<int> arr, int k) {
    int maxLen = 0;
    deque<int> maxHeap;
    deque<int> minHeap;

    int beg = 0;
    int end = 0;

    while (end < arr.size()) {
        int currEl = arr[end];

        while (!maxHeap.empty())
    }
}

int main() {
    // freopen("diamond.in", "r", stdin);
    // freopen("diamond.out", "w", stdout);
    freopen("input.in", "r", stdin);

    // SOLUTION: sliding window to find the first group, remove the group from the vector,
    // then sliding window again to find the second group, add their lengths
    
    int N, K;
    cin >> N >> K;

    vector<int> diamonds(N);
    for (int i = 0; i < N; i++) {
        cin >> diamonds[i];
    }

    sort(diamonds.begin(), diamonds.end());

    
}
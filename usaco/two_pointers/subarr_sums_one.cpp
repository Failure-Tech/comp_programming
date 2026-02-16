#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    vector<int> vals(n);
    for (int i = 0; i < n; i++) { cin >> vals[i]; }

    // find num of subbarys that sum to x
    // This problem can be solved with two pointers. We increment the left pointer when the sum is too large, 
    // and increment the right one when it's too small. When we have a valid subarray during an iteration, 
    // we add one to our answer.

    int left = 0;
    int right = 0;
    
    int sum = 0;
    int res = 0;
    while (left < n) {
        sum += vals[left];

        while (sum > x) {
            sum -= vals[right];
            right++;
        }

        if (sum == x) {
            res++;
        }
        left++;
    }

    cout << res << endl;

    return 0;
}
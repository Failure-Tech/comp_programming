#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    vector<pair<int, int>> vals(n);
    for (int i = 0; i < n; i++) {
        cin >> vals[i].first;
        vals[i].second = i+1;
    }

    sort(vals.begin(), vals.end());

    int l = 0;
    int r = n-1;

    while (l < r) {
        int sum = vals[l].first + vals[r].first;
        if (sum == x) {
            cout << vals[l].second << " " << vals[r].second;
            break;
        }

        else if (sum < x) {
            l++;
        }
        
        else {
            r--;
        }
    }

    if (l==r) {
        cout << "IMPOSSIBLE";
    }

    return 0;
}
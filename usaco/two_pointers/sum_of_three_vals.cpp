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
    // 4 8
    // 2 7 5 1
    // 1 2 5 7
    // 1, 2, 7
    bool impossible = false;
    for (int i = 0; i < n-2; i++) {
        int right = n-1;
        int left = i+1;
        while (left < right) {
            int sum = vals[left].first + vals[right].first + vals[i].first;
            if (sum == x) {
                impossible = true;
                cout << vals[i].second << " " << vals[left].second << " " << vals[right].second;
                break;
            }
            else if (sum < x) {
                left++;
            }
            else {
                right--;
            }
        }
        if (impossible) {
            break;
        }
    }

    if (!impossible) {
        cout << "IMPOSSIBLE";
    }

    return 0;
}
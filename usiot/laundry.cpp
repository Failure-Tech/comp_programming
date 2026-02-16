#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("laundry.input1.txt", "r", stdin);

    int N, C, W;
    cin >> N >> C >> W;

    vector<int> dry(N);
    for (int i = 0; i < N; i++) {
        cin >> dry[i];
    }

    sort(dry.begin(), dry.end(), greater<>());

    // remove every non cth element (not needed) (so 0, c, 2c, ...)
    vector<int> max_dry;

    for (int i = 0; i < N; i+=C+1) {
        max_dry.push_back(dry[i]);
    }

    for (int i = 0; i < max_dry.size(); i++) {
        int curr_time = W*(i+1) + max_dry[i];
        cout << curr_time << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("hps.in", "r", stdin);
    freopen("hps.out", "w", stdout);
    // freopen("input.in", "r", stdin);
    int N;
    cin >> N;

    vector<int> hoof(N+1), paper(N+1), scissor(N+1);
    for (int i = 1; i <= N; i++) {
        hoof[i] += hoof[i-1];
        paper[i] += paper[i-1];
        scissor[i] += scissor[i-1];

        char move;
        cin >> move;
        
        if (move == 'H') {
            paper[i]++;
        }
        else if (move == 'P')  {
            scissor[i]++;
        }
        else {
            hoof[i]++;
        }
    }

    int ans = 0;

    for (int i = 1; i <= N; i++) {
        int after_max = max({hoof[N]-hoof[i], scissor[N]-scissor[i], paper[N]-paper[i]});
        int before_max = max({hoof[i], scissor[i], paper[i]});
        ans = max(ans, before_max + after_max);
    }

    cout << ans << "\n";
}
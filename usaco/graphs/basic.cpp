#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.in", "r", stdin);
    int N, M; // N = # of nodes, M = # of edges
    cin >> N >> M;

    vector<int> adj[6];
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }



    return 0;
}
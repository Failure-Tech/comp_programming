#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("input.in", "r", stdin);

    int T;
    cin >> T;
    
    while (T--) {
        string message;
        cin >> message;

        unordered_map<char, int> mapping = {
            {'a', 1},
            {'e', 1},
            {'i', 1},
            {'o', 1},
            {'u', 1}
        };

        string ans = "";

        for (int i = 0; i < int(message.size())-1; i+=1) {
            if (mapping[message[i]] > 0) {
                ans += message[i+1];   
                if (mapping[message[i+1]] > 0 && i < message.size()) {
                    i+=1;
                }
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
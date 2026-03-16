#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    // freopen("input.in", "r", stdin);

	int T;
    cin >> T;

    while (T--) {
        unordered_map<string, int> numbers = {
            {"2", 0},
            {"3", 0},
            {"4", 0},
            {"5", 0},
            {"6", 0},
            {"7", 0},
            {"8", 0},
            {"9", 0},
            {"10", 0},
            {"Jack", 0},
            {"Queen", 0},
            {"King", 0},
            {"Ace", 0}
        };

        int N;
        cin >> N;

        // cout << "N test " << N << "\n";

        while (N--) {
            string thing;
            cin >> thing;
            // cout << "thing: " << thing << "\n";
            numbers[thing]++;
        }

        string rank;
        cin >> rank;

        cout << numbers[rank] << "\n";
    }

    return 0;
}

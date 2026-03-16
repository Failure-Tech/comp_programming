#include <bits/stdc++.h>
using namespace std;

std::multimap<int, char, greater<int>> invertMap(const std::map<char, int>& m) {
    std::multimap<int, char, greater<int>> inverted;
    for (const auto& p : m) {
        inverted.insert({p.second, p.first});
    }
    return inverted;
}   

int main() {
    // freopen("input.in", "r", stdin);

    int T;
    cin >> T;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    while (T--) {
        map<char, int> letters;

        string curr_stream;
        getline(cin, curr_stream);

        int num_chars = curr_stream.size();
        vector<string> hypens(num_chars, "-");

        int spaces = count(curr_stream.begin(), curr_stream.end(), ' ');
        spaces++;

        for (char s : curr_stream) {
            letters[s]++;
        }

        cout << curr_stream << "\n";
        for (int i = 0; i < num_chars; i++) {
            cout << hypens[i];
        }
        cout << "\n" << "CHARACTERS: " << num_chars << "\n";
        cout << "WORDS: " << spaces << "\n";

        auto sorted = invertMap(letters);
        
        for (const auto& p: sorted) {
            cout << p.second << ": " << p.first << "\n";
        }
    }

    return 0;
}
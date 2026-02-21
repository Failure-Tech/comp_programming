#include <bits/stdc++.h>
using namespace std;

int main() {
    string alphabet = "abcdefghijklmnopqrstuvwxyz";

    unordered_map<char, int> hashMapAlphabet;
    int index = 0;
    for (char character : alphabet) {
        index++;
        hashMapAlphabet[character] = index;
    }

    string linear_calc;
    cin >> linear_calc;

    int dist = 0;
    for (int i = 1; i < linear_calc.size(); i++) {
        dist += abs(hashMapAlphabet[linear_calc[i-1]] - hashMapAlphabet[linear_calc[i]]);
    }

    cout << "linear dist: " << dist << "\n";

    return 0; 
}
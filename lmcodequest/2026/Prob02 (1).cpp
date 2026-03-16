// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
    cin >> T;
    // cin.ignore();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    unordered_map<char, int> alphabet = {
        {'a', 1}, {'b', 1}, {'c', 1}, {'d', 1}, {'e', 1},
        {'f', 1}, {'g', 1}, {'h', 1}, {'i', 1}, {'j', 1},
        {'k', 1}, {'l', 1}, {'m', 1}, {'n', 1}, {'o', 1},
        {'p', 1}, {'q', 1}, {'r', 1}, {'s', 1}, {'t', 1},
        {'u', 1}, {'v', 1}, {'w', 1}, {'x', 1}, {'y', 1}, {'z', 1},
        {'A', 1}, {'B', 1}, {'C', 1}, {'D', 1}, {'E', 1},
        {'F', 1}, {'G', 1}, {'H', 1}, {'I', 1}, {'J', 1},
        {'K', 1}, {'L', 1}, {'M', 1}, {'N', 1}, {'O', 1},
        {'P', 1}, {'Q', 1}, {'R', 1}, {'S', 1}, {'T', 1},
        {'U', 1}, {'V', 1}, {'W', 1}, {'X', 1}, {'Y', 1}, {'Z', 1}
    };   

    // T++;
    while (T--) {
        string input;
        getline(cin, input);
        // cout << "input: " << input << "\n";        

        int size = input.size()-2;

        // if (T > 0) {
            if (alphabet[input[size]]) {
                cout << input[size] << "\n";
            }
            else {
                cout << "No Letter Found" << endl;
            }
        // }
        // else {
        //     if (alphabet[input[size]]) {
        //         cout << input[size] << "\n";
        //     }
        //     else {
        //         cout << "No Letter Found" << "\n";
        //     }
        // }
        
    }
}

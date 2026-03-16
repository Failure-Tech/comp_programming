#include <bits/stdc++.h>
#define _USE_MATH_DEFINES
#include <numbers>
using namespace std;

int main() {
    int T;
    cin >> T;

    double G = 6.673 * 1e-11;
    double M = 5.98 * 1e24;
    double R_E = 6.37 * 1e6;
    double pi = _NUMBERS_::p;
    
    // double pi = 3.14;

    while (T--) {
        int H;
        cin >> H;

        double R = R_E + H;
        double v = sqrt(G*M/R);
        int t = sqrt(4*pow(pi, 2) * pow(R, 3)/(G*M));
        int hours = floor(t/3600);
        int remaining_seconds = t % 3600;
        int minutes = floor(remaining_seconds/60);
        int seconds = minutes % 60;

        string min;
        if (minutes < 10) {
            min = "0" + to_string(minutes);
        }
        else {
            min = to_string(minutes);
        }

        string sec;
        if (seconds < 10) {
            sec = "0" + to_string(seconds);
        }
        else {
            sec = to_string(seconds);
        }


        // H: MM: SS
        cout << round(v) << " " << hours << ":" << min << ":" << sec << "\n";
    }
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.in", "r", stdin);

    int Dx, Dy, Ds;
    cin >> Dx >> Dy >> Ds;

    int Bx, By, Bs;
    cin >> Bx, By, Bs;

    char dir;
    cin >> dir;

    double total = 0;

    if (Dx == Bx && Dy == By) {
        cout << 0;
    }

    if (dir == 'U' || dir == 'D') {
        total += abs(Bx-Dx)/Ds;
        double curr_ball_pos = By + Bs*total;
        if (curr_ball_pos == Dy) {
            cout << ceil(total);
        }

        total += (curr_ball_pos - Dy) / (Ds - Bs);
    }

    else {
        total += abs(By-Dy)/Ds;
        double curr_ball_pos = Bx + Bs*total;
        if (curr_ball_pos == Dx) {
            cout << ceil(total);
        }

        // d = (curr_ball_pos - Dx)/(Ds - Bs)
        total += (curr_ball_pos - Dx) / (Ds - Bs);
    }

    cout << ceil(total);

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int ans = 0;

    if (A > B) {
        // more boys than girls
        ans = int(A / 3);
        // cout << " More boys than girls " << ans << endl;
        if (ans > B) {
            ans = B;
        }

        else {
            // int tempB = B - ans;
            // int tempA = A - ans * 3;
            B -= ans;
            A -= ans * 3;

            if (A + B >= 4 && (A != 0) && (B != 0)) {
                ans += min(min(A, B), int((A+B)/4));
            }
        }
    }

    else if (B > A) {
        // more girls than boys
        ans = int(B / 3);
        if (ans > A) {
            ans = A;
        }

        else {
            A -= ans;
            B -= ans * 3;
            if (A + B >= 4 && (A != 0) && (B != 0)) {
                ans += min(min(A, B), int((A+B)/4));
            }
        }
    }

    else if (A == B) {
        ans = int(A / 2);
    }

    cout << ans << endl;

    return 0;
}
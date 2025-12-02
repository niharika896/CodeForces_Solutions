#include <bits/stdc++.h>
using namespace std;

int main() {

    long long t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        long long teams = min({a, b, (a + b) / 4});
        cout << teams << "\n";
    }

    return 0;
}

//a truly baffling solution self explanatory
//we will not need more teams that the lower of a and b and if both conditions satisfy then number of teams cant be greater than sum/4

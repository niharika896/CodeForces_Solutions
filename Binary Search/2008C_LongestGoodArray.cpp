#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long l, r;
        cin >> l >> r;

        long long diff = r - l;
        long long low = 0, high = 2e9, ans = 0;

        while (low <= high) {
            long long mid = (low + high) / 2;
            long long sum = mid * (mid + 1) / 2;  //standard formula n(n+1)/2

            if (sum <= diff) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        cout << ans + 1 << "\n";
    }

    return 0;
}


//Explanation: if we think there will be 'mid' number of counts then the sum at the end will be lower_bound + n(n+1)/2 <upper_bound
//subtracting lower_bound  from both sides => n(n+1)/2 < diff where diff = upper_bound-lower_bound
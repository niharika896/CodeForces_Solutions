#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cout << "enter n" << endl;
    cin >> n;

    int exor = 0;
    int count = 0;
    int tf;
    int k;
    cout << "enter k" << endl;
    cin >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    unordered_map<int, int> mp;
    mp[0] = 1;  // base case: empty prefix

    for (int i = 0; i < n; i++) {
        exor ^= arr[i];

        tf = exor ^ k;
        if (mp.find(tf) != mp.end()) {
            count += mp[tf];
        }

        mp[exor]++;  // increment frequency
    }

    cout << "count is " << count << endl;
    return 0;
}

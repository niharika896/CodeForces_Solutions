#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int n;
    cin>>n;
    while(n--){
        string s, t;
        cin >> s >> t;

        int n = s.size(), m = t.size();

        int common_count = 0;
        while (common_count < n && common_count < m && s[common_count] == t[common_count])
            common_count++;
        int ans;
        if(common_count){
            ans = n + 1 + m - common_count;
        }
        else{
            ans = n + m;
        }
        cout << ans << "\n";
    }

    return 0;
}

//self-explanatory
#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int legs(int i){
    int result=i/4 + (i%4)/2;
    return result;
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i:a){
        cout<<legs(i)<<endl;
    }
    return 0;
}
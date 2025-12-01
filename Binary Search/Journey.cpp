#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
long long cntDays(vector<long long>&a){
    long long goal = a[0];
    long long x = a[1], y = a[2], z = a[3];

    long long cycleSum = x + y + z;
    long long cycles = goal / cycleSum;
    long long sum=cycles*cycleSum;
    long long days=cycles*3;

    if(sum>=goal)return days;
    else if(sum+x>=goal)return days+1;
    else if(sum+x+y>=goal)return days+2;
    else return days+3;

}
int main()
{
    long long n;
    cin >> n;
    vector<vector<long long>> a(n, vector<long long>(4, 0));
    for (long long i = 0; i < n; i++) {
        vector<long long>temp(4);
        for(long long j=0;j<4;j++){
            cin>>temp[j];
        }
        a[i]=temp;
    }

    for(auto row:a){
        cout<<cntDays(row)<<endl;
    }
    return 0;
}
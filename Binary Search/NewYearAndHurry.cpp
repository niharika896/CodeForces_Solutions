#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int n,k;
    cin>>n;
    cin>>k;
    int avTime=240-k;
    int time=0;
    for(int i=1;i<=n;i++){
        time+=5*i;
        if(time>avTime){
            cout<<i-1;
            return 0;
        }
    }
    cout<<n;
    return 0;
}
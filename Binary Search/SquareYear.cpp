#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int isSquare(int a){
    if(a<0)return -1;
    int l=0,r=a;
    while(l<=r){
        int mid=l + (r-l)/2;
        int sq=mid*mid;
        if(sq==a)return mid;
        else if(sq<a)l=mid+1;
        else r = mid-1;
    }
    return -1;
};
int main()
{
    int n;
    cin >> n;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i:a){
        int root=isSquare(i);
        if(root!=-1){
            cout<<"0"<<" "<<root<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int f(int i,string s){
    int n=s.length();
    if(i>=n/2)return 1;
    if(s[i]!=s[n-i-1])return 0;
    return f(i+1,s);
}

int main()
{
    string s = "amanaplanacapanama";
    cout<<f(0,s);
 return 0;
}
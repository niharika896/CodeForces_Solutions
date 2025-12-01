#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n>=4){
        if(n%2==0)cout<<"YES";
        else cout<<"NO";
    }
    else{
        cout<<"NO";
    }
 return 0;
}
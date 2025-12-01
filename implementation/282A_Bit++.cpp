#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x=0;
    for(int i=0;i<n;i++){
        string op;
        cin>>op;
        if(op.substr(0,2)=="--"  || op.substr(op.length()-2)=="--"){
            --x;
        }
        else if(op.substr(0,2)=="++"  || op.substr(op.length()-2)=="++"){
            ++x;
        }
    }
    cout<<x;
    return 0;
}
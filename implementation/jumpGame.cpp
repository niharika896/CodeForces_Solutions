#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a={1,2,4,1,1,0,2,5};
    int len=a.size();
    int maxInd=0;
    for(int i=0;i<len;i++){
        if(i>maxInd){cout<<"false";return 0;}
        maxInd=max(maxInd,i+a[i]);
    }
    cout<<"true";
 return 0;
}
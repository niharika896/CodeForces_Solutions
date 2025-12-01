#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int val;
    try{
        val = arr[k-1];
    }catch(const out_of_range& e){
        return 0;
    }
    int i;
    for(i=0;i<n;i++){
        if(arr[i]>=val && arr[i]>0)continue;
        else{
            break;
        }
    }
    cout<<i;
 return 0;
}
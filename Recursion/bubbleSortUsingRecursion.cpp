#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void bubbleSort(vector<int>& a,int end){
    if(end<1){
        return;
    }
    int i=0;
    while(i<end-1){
        if(a[i]>=a[i+1])
        swap(a[i],a[i+1]);
    i++;
    }
    bubbleSort(a,--end);
}
int main()
{
    vector<int> arr= {1,4,2,5,2};
    bubbleSort(arr,arr.size());
    for(auto it:arr){
        cout<<it<<" ";
    }

 return 0;
}

#include <iostream>
#include <vector>
using namespace std;
vector<int> rearrangeArray(vector<int>& nums) {
        int l=nums.size();
        vector<int>p;
        vector<int>n;
        vector<int>ans;
        for(int i:nums){
            if(i>0)p.emplace_back(i);
            else n.emplace_back(i);
        }
        for(int i=0;i<l;i++){
            if(i%2==0){
                ans.emplace_back(p[i/2]);
            }
            else{
                ans.emplace_back(n[i/2]);
            }
        }
    return ans;
    }

int main()
{
    int n;
    cin>>n;
    vector<int> arr;
    while(n>0){
        int i;
        cin>>i;
        arr.emplace_back(i);
        n--;
    }
    vector<int> ans=rearrangeArray(arr);
    for(int i:ans){
        cout<<i<<" ";
    }
 return 0;
}
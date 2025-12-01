#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    string i;
    cin>>i;
    int n=i.length();
    vector<int> arr;
    for(int j=0;j<n;j+=2){
        arr.push_back(i[j]-'0');
    }
    sort(arr.begin(),arr.end());
      for (int j = 0; j < arr.size(); j++) {
        cout << arr[j];
        if (j != arr.size() - 1) {
            cout << "+";
        }
    }
 return 0;
}
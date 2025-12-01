#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int main()
{
    int i_1,j_1;
    int arr[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            int n;
            cin>>n;
            if(n==1){i_1=i;j_1=j;};
            arr[i][j]=n;
        }
    }
    cout<<abs(i_1-2) + abs(j_1-2);
    
 return 0;
}
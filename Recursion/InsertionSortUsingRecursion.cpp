#include <iostream>
#include <vector>
using namespace std;
void insertionSort(vector<int>& arr,int end){
    if(end>=arr.size()){
        return;
    }
    int j = end;
    while(j> 0 && arr[j-1] > arr[j]){
        swap(arr[j], arr[j-1]);
        j--;
    }
    insertionSort(arr, end + 1);
}
int main()
{
    vector<int> arr = {12, 11, 13, 5, 6};
    insertionSort(arr, 1);
    cout << "Sorted array: ";
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
 return 0;
}

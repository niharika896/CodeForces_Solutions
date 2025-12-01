#include <iostream>
#include <vector>
using namespace std;

int countOnes(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 1)
            count++;
    }
    return count >= 2 ? 1 : 0;
}

int main()
{
    int n;
    cin >> n;
    int arr[n][3];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        result += countOnes(arr[i], 3);
    };
    cout << result;
    return 0;
}
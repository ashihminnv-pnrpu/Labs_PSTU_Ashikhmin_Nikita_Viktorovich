#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 3, 2, 7, 1, 6, 3};
    int n = size(arr);
    int y;
    for(int i = 0; i < n - 1; ++i)
    {
        int min = arr[i];
        int min_index = i;
        for(int j = i; j < n; ++j)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                min_index = j;
            }
        }
        y = arr[i];
        arr[i] = min;
        arr[min_index] = y;
    }
    for(int x : arr)
    {
        cout << x << ' ';
    }
}
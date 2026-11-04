#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 3, 2, 7, 1, 6, 7};
    int n = size(arr);
    int y;
    for(int i = 0; i < n; ++i)
    {
        int min = 2147483647;
        int min_index = 0;
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
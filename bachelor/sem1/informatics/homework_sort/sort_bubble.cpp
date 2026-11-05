#include <iostream>
#include <iterator>
using namespace std;

int main()
{
    int y;
    int arr[] = {4, 5, 3, 6, 1};
    int n = size(arr);
    for(int i = 0; i < n - 1; ++i)
    {
        for(int j = n - 1; j > i; --j)
        {
            if (arr[j] < arr[j-1])
            {
                y = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = y;
            }
        }
    }
    for (int m : arr)
    {
        cout << m << ' ';
    }
    cout << "\n";
}
#include <iterator>
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, 5, 4, 7, 9, 4};
    int n = size(arr);

    for(int i = 1; i < n; ++i)
    {
        int y = arr[i];
        int j = i - 1;

        while(j >= 0 and arr[j] > y)
        {
            arr[j + 1] = arr[j];
            --j;
        }

        arr[j + 1] = y;
    }
    for(int x : arr)
    {
        cout << x;
    }
    cout << '\n';
}


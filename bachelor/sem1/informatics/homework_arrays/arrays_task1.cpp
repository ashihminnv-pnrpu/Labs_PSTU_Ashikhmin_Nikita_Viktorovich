#include <iostream>
using namespace std;

int main()
{
    int sum;
    int arr[2][4] = {{5, 10, 6, 7}, {5, 6, 4, 5}};
    for(int i = 0; i < size(arr); i++)
    {
        sum = 0;
        for(int j = 0; j < size(arr[i]); j++)
        {
            sum += arr[i][j];
        }
        cout << sum << ' ';
    }
}
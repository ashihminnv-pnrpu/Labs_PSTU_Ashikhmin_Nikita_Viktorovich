#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
    int n = 10; // Длина массива
    int arr[10] = {};
    srand(2);
    for(int i = 0; i < n; ++i)
    {
        arr[i] = rand() % 10;
    }

    int count_zero{0};
    for(int x : arr)
    {
        cout << x << ' ';
        if(x != 0)
        {
            count_zero++;
        }
    }
    cout << endl << count_zero << endl;
    int arr_no_0[count_zero];
    int a{0};
    for(int x : arr)
    {
        if (x != 0)
        {
            arr_no_0[a] = x;
            a++;
        }
    }
    for(int x : arr_no_0)
    {
        cout << x << ' ';
    }
    int result[count_zero+1];
    a = 0;
    bool f = true;
    while(f)
    {
        if (arr_no_0[a] % 2 == 0)
        {
            f = false;
            continue;
        }
        a++;
    }
    for(int i = 0; i <= a; i++)
    {
        result[i] = arr_no_0[i];
    }

    result[a+1] = arr_no_0[a] + 2;

    for (int i = a+1; i < (count_zero + 1); i++)
    {
        result[i+1] = arr_no_0[i];
    }

    cout << endl;
    for(int x : result)
    {
        cout << x << ' ';
    }
    return 0;
}
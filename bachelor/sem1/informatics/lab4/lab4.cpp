#include <cstdlib>
#include <print>
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
        print("{} ", x);
        if(x != 0)
        {
            count_zero++;
        }
    }
    
    int arr_no_0[count_zero];
    for(int i = 0; i < count_zero; ++i)
    {
        
    }
    return 0;
}
#include <print>
using namespace std;

int main()
{
    int arr[][3] = {{2, 2, 3}, {5, 5, 3}, {7, 11, 2}};
    int max{-999999}, index1, index2;
    for(int i = 0; i < size(arr); i++)
    {
        for(int j : arr[i])
        {
            if (j > max)
            {
                max = j;
                index1 = i;
                index2 = j;
            }
        }
    }
    print("Максимальный {0}\nИндексы {1} {2}", max, index1, index2);
}
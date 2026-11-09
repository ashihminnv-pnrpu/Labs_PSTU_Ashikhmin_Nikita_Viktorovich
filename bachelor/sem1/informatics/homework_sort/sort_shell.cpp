#include <print>
#include <vector>
using namespace std;

template <typename T>
void sort_shell(vector<T>& arr)
{
    const int n = arr.size();

    for(int step{n/2}; step > 0; step /= 2)
    {
        for(int i{step}; i < n; ++i)
        {
            int temp = arr[i];
            int j{i};

            while((j >= step) and (arr[j - step] > temp))
            {
                arr[j] = arr[j - step];
                j -= step;
            }
            arr[j] = temp;
        }
    }
}

int main()
{
    vector<int> arr = {10, 6, 5, 7, 4, 5};
    sort_shell(arr);
    for(int x : arr)
    {
        print("{} ", x);
    }
    return 0;
}

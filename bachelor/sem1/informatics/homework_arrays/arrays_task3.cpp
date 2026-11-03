#include <iostream>
using namespace std;

int main()
{
    bool F = false;
    int arr[] = {1, 2, 3, 4};
    int i{0};

    while((F == false) and (i < (size(arr) - 1)))
    {
        if (arr[i] < arr[i+1])
        {
            i++;
        }
        else
        {
            F = true;
        } 
    }

    if (F == true)
    {
        cout << "Последовательность нарушена";
    }
    else
    {
        cout << "Последовательность не нарушена";
    }
}
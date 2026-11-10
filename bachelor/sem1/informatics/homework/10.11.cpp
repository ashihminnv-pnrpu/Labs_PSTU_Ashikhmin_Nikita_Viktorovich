#include <print>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3}, {-5, 5, 6}, {-7, -6, -6}};
    bool full_positive;
    int i{0};
    for(vector<int> x : matrix)
    {
        i++;
        full_positive = true;
        for(int y : x)
        {
            if (y < 0)
            {
                full_positive = false;
            }
        }
        if (full_positive)
        {
            println("Строка {} полностью состоит из положительных элементов", i);
        }
        else
            println("Строка {} не полностью состоит из положительных элементов", i);
    }

}
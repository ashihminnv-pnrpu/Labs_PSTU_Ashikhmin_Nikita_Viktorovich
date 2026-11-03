#include <print>
using namespace std;

int main()
{
    int arr[] = {11, 11, 11, 3, 3, 5, 7, 4, 1, 1};
    int i{0}, max{-9999999}, min{9999999}, index_max{0}, index_min{0}, amount_max{0}, amount_min{0};

    for(int x : arr)
    {
        if (x > max)
        {
            max = x;
            index_max = i;
            amount_max = 1;
        }
        else if (x == max)
        {
            amount_max++;
        }

        else if (x < min)
        {
            min = x;
            index_min = i;
            amount_min = 1;
        }
        else if (x == min)
        {
            amount_min++;
        }

        i++;
    }
    println("Минимальный элемент {}", min);
    println("Максимальный элемент {}", max);
    println("Индекс минимального {}", index_min);
    println("Индекс максимального {}", index_max);
    println("Номер минимального {}", index_min + 1);
    println("Номер максимального {}", index_max + 1);
    println("Количество минимальных {}", amount_min);
    println("Количество максимальных {}", amount_max);
}


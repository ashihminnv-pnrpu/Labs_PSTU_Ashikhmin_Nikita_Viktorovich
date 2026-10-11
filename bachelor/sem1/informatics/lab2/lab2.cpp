#include <iostream>

void main()
{   
    int result = 0;
    int i = 1;
    while (i < 200){
        result += i;
        i += 2;
    }
    std::cout << "Сумма целых положительных нечётных чисел, меньших 200 равна " << result;
}
#include <print>
#include <iostream>
#include <cstdio>
using namespace std;

int pseudo_rand() //Генератор псевдо рандомных чисел
{
    static int k = 3;
    k = (k * 73129 - 95121) % 100000;
    return k;
}


int main()
{
    int length;
    print("Input array length: ");
    cin >> length;
    int arr[100];
    int i{0};
    for(i; i<length; i++)
    {
        arr[i] = pseudo_rand();
    };
    print("{}", arr);
}
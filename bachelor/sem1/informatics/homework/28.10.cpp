#include <iostream>
using namespace std;

int eight()
{
    int n, maxel = 0, index, a;
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a > maxel)
        {
            maxel = a;
            index = i;
        }
    }
    cout << maxel << endl << index;
    if (index == 0)
    {
        cout << "Первое число максимально";
    }
    return 0;
};

int nine()
{
    int n, prev_el, a, state = 0;
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if ((a == prev_el) and (i > 0))
        {
            state = 1;
        }
        prev_el = a;
    }
    cout << state;
    return 0;
};

int main()
{
    cout << "Задание 8 \n";
    eight();
    cout << "Задание 9 \n";
    nine();
}
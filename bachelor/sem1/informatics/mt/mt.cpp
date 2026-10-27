#include <print>
using namespace std;

int first()
{
    int head{1}, position{0}; // Стартовые состояние башки и позиция, при head = 0 тормозится алгоритм
    char arr[] = {' ', '1', '0', '1', '0', '1', '1', ' ', '\0'}; // Лента
    char alp[] = {'0', '1', ' '}; // Алфавит

    while (head) 
    {
        if (head == 1)
        {
            if (arr[position] == alp[2])
            {
                head = 2;
                position += 1;
                continue;
            };
            
        };
        if (head == 2)
        {
            if (arr[position] == alp[0])
            {
                arr[position] = alp[1];
                position += 1;
                continue;
            };
            if (arr[position] == alp[1])
            {
                arr[position] = alp[0];
                position += 1;
                continue;
            };
            if (arr[position] == alp[2])
            {
                head = 0;
                position += 1;
                continue;
            };
            
        };
    };
    print("1. {} \n", arr);
    return 0;
};


int second()
{
    int head{1}, position{0}; // Стартовые состояние башки и позиция, при head = 0 тормозится алгоритм
    char arr[] = {' ', '1', '1', '+', '1', ' ', '\0'}; // Лента
    char alp[] = {' ', '1', '+'}; // Алфавит

    while (head) 
    {
        if (head == 1)
        {
            if (arr[position] == alp[2])
            {
                arr[position] = alp[1];
                head = 2;
                position += 1;
            }
            else
            {
                position += 1;
            }
        }
        else if (head == 2)
        {
            if (arr[position] == alp[0])
            {
                position -= 1;
                head = 3;
            }
            else
            {
                position += 1;
            }
        }
        else if (head == 3)
        {
            arr[position] = alp[0];
            head = 0;
        }
    };
    print("2. {} \n", arr);
    return 0;
};


int third()
{
    int head{1}, position{0}; // Стартовые состояние башки и позиция, при head = 0 тормозится алгоритм
    char arr[] = {' ', 'a', 'b', 'b', ' ', '\0'}; // Лента
    char alp[] = {'a', 'b', ' '}; // Алфавит

    while (head) 
    {
        if (head == 1)
        {
            if (arr[position] == alp[0])
            {
                arr[position] = alp[2];
                position -= 1;
                head = 3;
            }
            else if (arr[position] == alp[1])
            {
                arr[position] = alp[2];
                position -= 1;
                head = 4;
            }
            else if (arr[position] == alp[2])
            {
                position += 1;
                head = 2;
            }
        }
        else if (head == 2)
        {
            if (arr[position] == alp[0])
            {
                arr[position] = alp[0];
                position += 1;
                head = 2;
            }
            else if (arr[position] == alp[1])
            {
                arr[position] = alp[1];
                position += 1;
                head = 2;
            }
            else if (arr[position] == alp[2])
            {
                arr[position] = alp[2];
                position -= 1;
                head = 1;
            }
        }
        else if (head == 3)
        {
            if (arr[position] == alp[0])
            {
                arr[position] = alp[0];
                position -= 1;
                head = 3;
            }
            else if (arr[position] == alp[1])
            {
                arr[position] = alp[1];
                position -= 1;
                head = 3;
            }
            else if (arr[position] == alp[2])
            {
                arr[position] = alp[0];
                head = 0;
            }
        }
        else if (head == 4)
        {
            if (arr[position] == alp[0])
            {
                arr[position] = alp[0];
                position -= 1;
                head = 4;
            }
            else if (arr[position] == alp[1])
            {
                arr[position] = alp[1];
                position -= 1;
                head = 4;
            }
            else if (arr[position] == alp[2])
            {
                arr[position] = alp[1];
                head = 0;
            }
        }
    };
    print("3. {} \n", arr);
    return 0;
};


int fourth() //1 если палиндром и 0 если нет
{
    int head{1}, position{1};  // Стартовые состояние башки и позиция, при head = 0 тормозится алгоритм
    char arr[] = {' ', 'a', 'b', 'b', 'a', ' ', '\0'}; // Лента
    char alp[] = {'a', 'b', ' '}; // Алфавит

    while (head)
    {
        if (head == 1)
        {
            if (arr[position] == alp[0])
            {
                arr[position] = alp[2];
                position += 1;
                head = 2;
            }
            else if (arr[position] == alp[1])
            {
                arr[position] = alp[2];
                position += 1;
                head = 3;
            }
            else if (arr[position] == alp[2])
            {
                arr[position] = '1';
                head = 0;
            }
        }
        else if (head == 2)
        {
            if (arr[position] == alp[0] or arr[position] == alp[1])
            {
                position += 1;
            }
            else if (arr[position] == alp[2])
            {
                position -= 1;
                head = 4;
            }
        }
        else if (head == 3)
        {
            if (arr[position] == alp[0] or arr[position] == alp[1])
            {
                position += 1;
            }
            else if (arr[position] == alp[2])
            {
                position -= 1;
                head = 5;
            }
        }
        else if (head == 4)
        {
            if (arr[position] == alp[0])
            {
                arr[position] = alp[2];
                position -= 1;
                head = 6;
            }
            else if (arr[position] == alp[2])
            {
                arr[position] = '1';
                head = 0;
            }
            else
            {
                arr[position] = '0';
                head = 0;
            }
        }
        else if (head == 5)
        {
            if (arr[position] == alp[1])
            {
                arr[position] = alp[2];
                position -= 1;
                head = 6;
            }
            else if (arr[position] == alp[2])
            {
                arr[position] = '1';
                head = 0;
            }
            else
            {
                arr[position] = '0';
                head = 0;
            }
        }
        else if (head == 6)
        {
            if (arr[position] == alp[0] or arr[position] == alp[1])
            {
                position -= 1;
            }
            else if (arr[position] == alp[2])
            {
                position += 1;
                head = 1;
            }
        }
    }
    print("4. {} \n", arr);
    return 0;
}


int main()
{
    first();
    second();
    third();
    fourth();
}
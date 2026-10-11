#include <iostream>
#include <math.h>
float first_exercise_float()
{
    float a = 1000;
    float b = 0.0001;
    float a_pl_b3 = pow(a+b, 3);
    float a3 = pow(a, 3);
    float a2 = pow(a, 2);
    float b2 = pow(b, 2);
    float b3 = pow(b, 3);
    float result = (a_pl_b3-(a3+3*a2*b))/(3*a*b2+b3);
    return result;
}

double first_exercise_double()
{
    double a = 1000;
    double b = 0.0001;
    double a_pl_b3 = pow(a+b, 3);
    double a3 = pow(a, 3);
    double a2 = pow(a, 2);
    double b2 = pow(b, 2);
    double b3 = pow(b, 3);
    double result = (a_pl_b3-(a3+3*a2*b))/(3*a*b2+b3);
    return result;
}

int second_exercise()
{
    int n, m;
    std::cin >> n;
    std::cin >> m;
    int first = n---m;
    int second = m--<n;
    int third = n++>m;
    std::cout << first << "\n" << second << "\n" << third;
    return 0;
}

float main()
{   
    int first, second, third;
    std::cout << first_exercise_float() << '\n';
    std::cout << first_exercise_double() << '\n' << '\n';
    second_exercise();
    return 0;
}
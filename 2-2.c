#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <float.h>

/**
 * @brief Считывает вещественное число с клавиатуры
 * @return Введённое вещественное число
 */
double getDouble();

/**
 * @brief Вычисляет значение заданной функции
 * @param x Аргумент функции
 * @return Вычисленное значение функции
 */
double y(const double x);

int main()
{
    printf("Enter x: ");
    double x = getDouble();
    printf("y = %lf",y(x));

    return 0;
}

double getDouble()
{
    double value = 0.0;
    if (scanf("%lf", &value) != 1)
    {
        printf("Error ");
        exit(1);
    }
    return value;
}

double y(const double x)
{
    if (x<=2)
    {
        return 2*sin(x);
    }
    else
    {
        if (fabs(cos(x)) < DBL_EPSILON)
        {
            printf("Function is not defined\n");
            exit(1);
        }
        return tan(x) + (M_PI/3);
    }
}

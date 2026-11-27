#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * @brief Считывает действительное число с клавиатуры
 * @return Введённое действительное число
 */
double getDouble();
/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно
 */

int main()
{
    printf("Enter a: ");
    double a = getDouble();
    printf("Enter b: ");
    double b = getDouble();
    printf("Enter c: ");
    double c = getDouble();

    if (a < b && b < c)
    {
        a = a * 2;
        b = b * 2;
        c = c * 2;
        
    }
    else
    {
        a = fabs(a);
        b = fabs(b);
        c = fabs(c);
    }
    printf("a = %lf\n", a);
    printf("b = %lf\n", b);
    printf("c = %lf\n", c);

    return 0;
}



double getDouble()
{
    double value = 0.0;

    if (scanf("%lf", &value) != 1)
    {
        printf("Error");
        exit(1);
    }

    return value;
}

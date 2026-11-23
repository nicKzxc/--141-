#include <stdio.h>
#include <math.h>

/**
 * @brief Вычисляет длину гипотенузы прямоугольного треугольника
 * @param a Первый катет
 * @param b Второй катет
 * @return Рассчитанная длина гипотенузы
 */
double GetC(const double a, const double b);

/**
 * @brief Вычисляет периметр прямоугольного треугольника
 * @param a Первый катет
 * @param b Второй катет
 * @param c Гипотенуза
 * @return Рассчитанный периметр треугольника
 */
double GetPerimeter(const double a, const double b, const double c);

/**
 * @brief Вычисляет площадь прямоугольного треугольника
 * @param a Первый катет
 * @param b Второй катет
 * @return Рассчитанная площадь треугольника
 */
double GetArea(const double a, const double b);

/**
 * @brief Считывает с клавиатуры значение с плавающей точкой
 * @return Считанное значение
 */
double getDouble();


int main()
{
    printf("Enter the first cathetus: ");
    double a = getDouble();

    printf("Enter the second cathetus: ");
    double b = getDouble();

    printf("The perimeter of the triangle is: %lf\n", GetPerimeter(a, b, GetC(a, b)));
    printf("The area of the triangle is: %lf\n", GetArea(a, b));

    return 0;
}


double GetC(const double a, const double b)
{
    return sqrt(pow(a, 2) + pow(b, 2));
}

double GetPerimeter(const double a, const double b, const double c)
{
    return a + b + c;
}

double GetArea(const double a, const double b)
{

    return (a * b) / 2;
}3

double getDouble()
{
    double value = 0.0;
    scanf("%lf", &value);
    return value;
}

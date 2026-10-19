#include <stdio.h>
#include <math.h>
/*
* @brief рассчитывает функцию A по заданной формуле
* @param x - значение параметра x
* @param y - значение параметра y
* @param z - значение параметра z
* @return рассчитанное значение
*/
double GetA(const double x, const double y, const double z);
/*
* @brief рассчитывает функцию B по заданной формуле
* @param x - значение параметра x
* @param y - значение параметра y
* @param z - значение параметра z
* @return рассчитанное значение
*/
double GetB(const double x, const double y, const double z);

/*
* @brief точка входа в программу
* @return возвращает 0, если программа выполнена корректно
*/

int main() {

    const double x = 1.7;
    const double y = 1.08;
    const double z = 0.5;

    double a = GetA(x, y, z);
    double b = GetB(x, y, z);

    printf("x = %lf\n", x);
    printf("y = %lf\n", y);
    printf("z = %lf\n", z);

    printf("a = %lf\n", a);
    printf("b = %lf\n", b);


    return 0;
}
double GetB(const double x, const double y, const double z) {
    return exp(-z * x) * sqrt(x + 1) + exp(-y * x);
    
}
double GetA(const double x, const double y, const double z) {
    return (sin(x) / sqrt(pow(y, 2) + pow(sin(x), 2))) - (pow(x, 2) * y * z);
}

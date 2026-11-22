#include <stdio.h>

/**
 * @brief Считывает с клавиатуры массу льда
 * @return Введённое значение массы
 */
double getDouble();
/**
 * @brief Вычисляет количество теплоты, необходимое для нагревания льда
 * @param m Масса льда
 * @return Количество теплоты, затраченное на нагревание
 */
double GetQ1(const double m);
/**
 * @brief Вычисляет количество теплоты, необходимое для плавления льда
 * @param m Масса льда
 * @return Количество теплоты, затраченное на плавление
 */
double GetQ2(const double m);
/**
 * @brief Вычисляет общую энергию, необходимую для превращения льда в воду
 * @param Q1 Энергия нагревания льда
 * @param Q2 Энергия плавления льда
 * @return Общая затраченная энергия
 */
double GetQ(const double Q1, const double Q2);

int main()
{
    printf("Enter the mass of ice (kg): ");
    double m = getDouble();

    double Q1 = GetQ1(m);
    double Q2 = GetQ2(m);
    double Q = GetQ(Q1, Q2);

    printf("Energy is %lf Joules\n", Q);
    return 0;
}

double getDouble()
{
    double m = 0;
    scanf("%lf", &m);
    return m;
}

double GetQ1(const double m)
{
    return 2100 * m * 10;
}

double GetQ2(const double m)
{
    return 334000 * m;
}

double GetQ(double Q1, double Q2)
{
    return Q1 + Q2;
}

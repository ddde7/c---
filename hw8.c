#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double standard_deviation(double* arr)
{
    double result, num = 0;
    double population_mean = (arr[0] + arr[1] + arr[2] + arr[3] + arr[4]) / 5;
    for (int i = 0; i < 5; i++)
    {
        num += pow(arr[i] - population_mean, 2);
    }
    result = sqrt(num / 5);
    return result;
}

int main()
{
    double arr[5];
    printf("Enter 5 real nembers:");
    scanf("%lf %lf %lf %lf %lf", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
    printf("Standard Deviation = %.3f", standard_deviation(arr));
}
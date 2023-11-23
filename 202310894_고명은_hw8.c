#include <stdio.h>
#include <math.h>

double calSD(double arr[], int n);

int main(void) 
{
    double numbers[5];
    int i;

    printf("Enter 5 real numbers: ");
    for (i = 0; i < 5; i++) 
    {
        scanf_s("%lf", &numbers[i]);
    }

    printf("Standard Deviation = %.3lf\n", calSD(numbers, 5));
    return 0;
}

double calSD(double arr[], int n) 
{
    double mean = 0.0, sum = 0.0, standardDeviation = 0.0;

    for (int i = 0; i < n; i++) 
    {
        mean += arr[i];
    }
    mean /= n;

    for (int i = 0; i < n; i++) 
    {
        sum += pow(arr[i] - mean, 2);
    }

    standardDeviation = sqrt(sum / n);
    return standardDeviation;
}

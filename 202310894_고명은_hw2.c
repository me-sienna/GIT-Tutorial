#include <stdio.h>

//202310894 고명은 hw2

int main(void) 
{
    double kilometers;
    printf("Please enter kilometers: ");
    scanf_s("%lf", &kilometers);

    double miles = kilometers / 1.609;

    printf("%.1lf km is equal to %.1lf miles\n", kilometers, miles);
    return 0;
}

#include <stdio.h>

int main() 
{
    int num;
    int Prime = 1;

    printf("Please enter a number: ");
    scanf_s("%d", &num);

    if (num <= 1) 
    {
        Prime = 0;  
    }
    else 
    {
        for (int i = 2; i * i <= num; i++) 
        {
            if (num % i == 0) 
            {
                Prime = 0;  
                break;
            }
        }
    }

    if (Prime) 
    {
        printf("It is a prime number.\n");
    }
    else 
    {
        printf("It is not a prime number.\n");
    }

    return 0;
}

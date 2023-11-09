#include <stdio.h>

int main(void) 
{
    int numbers[5];
    int oddnumbers[5];
    int evennumbers[5];
    int oddcount = 0;
    int evencount = 0;

    printf("Please input five integers: ");
    int i;
    for (i = 0; i < 5; i++) 
    {
        scanf_s("%d", &numbers[i]);
    }

    for (i = 0; i < 5; i++) 
    {
        if (numbers[i] % 2 == 0) 
        {
            evennumbers[evencount] = numbers[i];
            evencount++;
        }
        else 
        {
            oddnumbers[oddcount] = numbers[i];
            oddcount++;
        }
    }

    printf("Odd numbers:");
    for (int i = 0; i < oddcount; i++) 
    {
        printf(" %d", oddnumbers[i]);
    }
    printf("\n");

    printf("Even numbers:");
    for (int i = 0; i < evencount; i++) 
    {
        printf(" %d", evennumbers[i]);
    }
    printf("\n");
    return 0;
}




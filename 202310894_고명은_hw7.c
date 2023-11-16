#include <stdio.h>

int main(void) 
{
    int arr1[6] = { 1, 2, 3, 4, 5, 6 };
    int arr2[6] = { 7, 8, 9, 10, 11, 12 };

    int* fptr1 = &arr1[0];
    int* bptr1 = &arr1[5];
    int* fptr2 = &arr2[0];
    int* bptr2 = &arr2[5];

    printf("arr1: ");
    for (int i = 0; i < 6; i++) 
    {
        printf("%d ", arr1[i]);
    }
    printf("\narr2: ");
    for (int i = 0; i < 6; i++) 
    {
        printf("%d ", arr2[i]);
    }

    int temp;
    for (int i = 0; i < 3; i++) 
    {
        temp = *fptr1;
        *fptr1 = *fptr2;
        *fptr2 = temp;

        fptr1++;
        fptr2++;
    }

    printf("\n\nafter swap\n");
    printf("arr1: ");
    for (int i = 0; i < 6; i++) 
    {
        printf("%d ", arr1[i]);
    }
    printf("\narr2: ");
    for (int i = 0; i < 6; i++) 
    {
        printf("%d ", arr2[i]);
    }
    return 0;
}

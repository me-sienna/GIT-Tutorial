#include <stdio.h>

void conversion(int num)
{
    if (num > 0) 
    {
        conversion(num / 2);
        printf("%d", num % 2);
    }
}

int main(void) 
{
    int decimal;

    printf("양의 정수 입력: ");
    scanf_s("%d", &decimal);

    if (decimal < 0) 
    {
        printf("양의 정수 입력.\n");
    }
    else if (decimal == 0) 
    {
        printf("2진수 변환값 출력: 0\n");
    }
    else 
    {
        printf("2진수 변환값 출력: ");
        conversion(decimal);
        printf("\n");
    }

    return 0;
}

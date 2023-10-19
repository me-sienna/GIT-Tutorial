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

    printf("���� ���� �Է�: ");
    scanf_s("%d", &decimal);

    if (decimal < 0) 
    {
        printf("���� ���� �Է�.\n");
    }
    else if (decimal == 0) 
    {
        printf("2���� ��ȯ�� ���: 0\n");
    }
    else 
    {
        printf("2���� ��ȯ�� ���: ");
        conversion(decimal);
        printf("\n");
    }

    return 0;
}

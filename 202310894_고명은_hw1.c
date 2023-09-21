#include <stdio.h>

// 202310894 고명은 hw1
int main(void) 
{
    int num1, num2;
    printf("Input two integers: ");
    scanf_s("%d %d", &num1, &num2);

    int result1 = num1 & num2;
    int result2 = num1 | num2;
    int result3 = num1 ^ num2;
    
    printf("AND 연산 결과: %d\n", result1);
    printf("OR 연산 결과: %d\n", result2);
    printf("XOR 연산 결과: %d\n", result3);

    return 0;
}

#include <stdio.h>

int convCase(int ch) 
{
    const int diff = 'a' - 'A';
    if (ch >= 'A' && ch <= 'Z')
        return ch + diff;
    else if (ch >= 'a' && ch <= 'z')
        return ch - diff;
    else
        return ch;
}

int main(void) 
{
    printf("input: ");

    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF) 
    {
        int convertedCh = convCase(ch);
        putchar(convertedCh);
    }
    return 0;
}
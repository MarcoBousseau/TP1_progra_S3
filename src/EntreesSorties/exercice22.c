#include <stdio.h>

int main(void)
{
    char ch1, fin, ch2, fin2;
    for (char ch1 = 'a', fin = 'z'; ch1 <= fin; ch1++)
    {
        putchar(ch1);
        printf("\n");
    }
    printf("\n");
    char diff = 'z'-'a';
    printf("%d \n", diff);
    for (char ch2 = 'A', fin2 = 'Z'; ch2 <= fin2; ch2++)
    {
        printf("\n");
        putchar(ch2);
    }
}
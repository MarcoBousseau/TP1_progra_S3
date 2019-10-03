#include <stdio.h>

int main(void)
{
    int step = 0;
    int fin = 26;
    for ( step, fin; step <= fin; step = step + 1)
    {
        printf("0%c \n", step);
    }
}
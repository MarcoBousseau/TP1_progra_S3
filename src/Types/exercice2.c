#include <stdio.h>

int main(void)
{
    int x0, x1;
    x0 = 0;
    x1 = 0;
    printf("x0 est en %p, et x1 en %p \n", &x0, &x1);
    printf("difference : %ld \n", &x0-&x1);
    int x2 = 0;
    printf("difference 2 : %ld \n", &x0-&x2);
    x1 = &x0+1;
    printf("%d \n", x1);
}
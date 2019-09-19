#include <stdio.h>

int main(int argc)
{
    int x0, x1;
    x0 = 0;
    x1 = 0;
    printf("x0 est en %p, et x1 en %p \n", &x0, &x1);
    printf("difference : %ld \n", &x1-&x0);
    int x2 = 0;
    printf("difference &x2-&x0 : %ld \n", &x2-&x0);
    printf("difference &x1-&x0 : %ld \n", &x1-&x0);
    printf("difference &x2-&x1 : %ld \n", &x2-&x1);
    *(&x0 + 1) = 2;
    *(&x0 + 2) = 3;
    printf("nouveau x1 vaut : %d \n", x1);
    printf("nouveau x2 vaut : %d \n", x2);
    *(&x0 - 4) = 6;
    printf("argc vaut : %d \n", argc);
    // adresse de argc est *premiere variable-4 ou -2//
    printf("%d \n",sizeof(char));
    printf("%d \n",sizeof(short int));
    printf("%d \n",sizeof(int));
    printf("%d \n",sizeof(long int));
    printf("%d \n",sizeof(float));
    printf("%d \n",sizeof(double));
    printf("%d \n",sizeof(int *));
    printf("%d \n",sizeof(char *));
}
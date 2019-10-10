#include <stdio.h>
int main(int argc)
{
    int x[3] = {12,54,32};
    *(&x[0] - 4) = 6;
    // adresse de argc est *premiere variable-4 ou -2//
    printf("x[0] = %d \n", x[0]);
    printf("x[1] = %d \n", x[1]);
    printf("x[2] = %d \n", x[2]);
    printf("valeur de x par l'adresse : %d \n", *(&(*x)));
    printf("adresse de x : %p \n", &x);
    printf("taille de x : %ld \n",sizeof(x));
    printf("taille de &x : %ld \n",sizeof(&x));
    printf("taille de x[0] : %ld \n",sizeof(x[0]));
    printf("valeur de x[0] autre calcul : %d \n", *(x));
    printf("valeur de x[1] autre calcul : %d \n", *(x+1));
    printf("valeur de x[2] autre calcul : %d \n", *(x+2));
    // correction ://
    //int x[3];//
    //printf("%p \n %p \n %p \n", &x, x, x[0]);//
    //printf("%ld \n %ld \n %ld\n", sizeof(&x), sizeof(x), sizeof(x[0]));//
}
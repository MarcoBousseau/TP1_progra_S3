#include <stdio.h> 

void affiche_tableau(unsigned char *t, int taille){
    for(int i = 0; i<taille; i++){
        printf("%d ",t[i]);
    }
    printf("\n");
}

//additionneur()

int main(void)
{
    unsigned char t1[10]={56,125,234,12,124,0}, t2[10]={34,131,20,244,200,0}, t3[10];
    affiche_tableau(t1, 10);
    affiche_tableau(t2, 10);
    affiche_tableau(t3, 10);
}
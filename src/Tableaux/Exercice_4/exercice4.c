#include <stdio.h> 

void affiche_tableau(unsigned char *t, int taille, char *nom){
    printf("t%c : ", nom[1]);
    for(int i = 0; i<taille; i++){
        printf("%d ",t[i]);
    }
    printf("\n");
}

unsigned char additionneur(unsigned char *resultat, unsigned char retenue, unsigned char t1, unsigned char t2){
    if(retenue != 0){
      *resultat = retenue + t1 + t2 ;
    }
    else{
      *resultat = t1 + t2;
    }
    retenue = (*resultat)/10;
    *resultat= (*resultat)%10;
    return retenue;
}

int addition_tableau(unsigned char *t1, unsigned char *t2, unsigned char *t3, int taille){
    unsigned char retenue= 0;
    for(int i=0; i<taille; i++){
        retenue = additionneur((t1+i), retenue, t2[i], t3[i]);
    }
    if(retenue == 1){
        return 1;
    }
    else{
        return 0;
    }
}

int main(void){
    unsigned char t1[10]={56,125,234,12,124,0,0,0,0,0}, t2[10]={34,131,20,244,200,0,0,0,0,0}, t3[10]={0,0,0,0,0,0,0,0,0,0};
    //affiche_tableau(t1, 10, "t1");
    //affiche_tableau(t2, 10, "t2");
    //affiche_tableau(t3, 10, "t3");
    unsigned char t4[10], t5[10], t6[10];
    addition_tableau(t4, t1, t2, 10);
    addition_tableau(t5, t1, t3, 10);
    addition_tableau(t6, t2, t3, 10);
    affiche_tableau(t4, 10, "t4");
    affiche_tableau(t5, 10, "t5");
    affiche_tableau(t6, 10, "t6");
}
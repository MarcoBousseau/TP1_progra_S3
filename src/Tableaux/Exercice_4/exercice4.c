#include <stdio.h> 
#include <math.h>

void affiche_tableau(unsigned char *t, int taille, char *nom){
    printf("t%c : ", nom[1]);
    for(int i = 0; i<taille; i++){
        printf("%d ",t[i]);
    }
    printf("\n");
}

void additionneur(unsigned char *resultat, unsigned char *retenue, unsigned char t1, unsigned char t2){
    unsigned char res;
    resultat = &res;
    if(*retenue != 0){
      *resultat = *retenue + t1 + t2 ;
    }
    else{
      *resultat = t1 + t2;
    }
    *retenue = (*resultat)/10;
    *resultat= (*resultat)%10;
}

int addition_tableau(unsigned char *t1, unsigned char *t2, unsigned char *t3, int taille){
    unsigned char ret = 0;
    unsigned char *retenue;
    retenue = &ret;
    for(int i=0; i<taille; i++){
         additionneur(t1[i], retenue, t2[i], t3[i]);
    }
    if(retenue == 1){
        return 1;
    }
    else{
        return 0;
    }
}

void verifie_addition(unsigned char t2, unsigned char t3){
    int total = 0;
    unsigned char t1[10];
    for(int i = 0; i<10; i++){
        total = total + (10**(i))*(t2[i]+t3[i]);
    }
    int cptr = 0;
    printf("resultat : t = [");
    while(total != 0){
        t1[cptr] = total%10;
        total = total/10;
        printf(" %d ", t[cptr]);
        cptr++;
    }
    printf("]");
}

int main(void){
    unsigned char t1[10]={56,125,234,12,124,0,0,0,0,0}, t2[10]={34,131,20,244,200,0,0,0,0,0}, t3[10]={0,0,0,0,0,0,0,0,0,0};
    /*affiche_tableau(t1, 10, "t1");
    affiche_tableau(t2, 10, "t2");
    affiche_tableau(t3, 10, "t3");
    unsigned char *t1_ad, *t2_ad, *t3_ad;
    t1_ad = t1;
    t2_ad = t2;
    t3_ad = t3;*/
    unsigned char t4[10], t5[10], t6[10];
    addition_tableau(t4, t1, t2, 10);
    addition_tableau(t5, t1, t3, 10);
    addition_tableau(t6, t2, t3, 10);
    affiche_tableau(t4, 10, "t4");
    verifie_addition(t1, t2);
    affiche_tableau(t5, 10, "t5");
    verifie_addition(t1, t3);
    affiche_tableau(t6, 10, "t6");
    verifie_addition(t2, t3);
}
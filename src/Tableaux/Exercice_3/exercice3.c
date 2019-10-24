#include <time.h>
#include <stdlib.h>
#include <stdio.h>

//                                                                                  !!! NE MARCHE PAS !!!

void trouve_candidat(int *t, int *candidat){
    int i=0, majorite=0, cand;
    cand = t[i];
    i++;
    do{
        if(majorite == 0){
            cand = t[i+1];
            majorite++;
        }
        if (cand==t[i]){
            majorite++;
            i++;
        }
        else{
            majorite--;
            i++;
        }
        //printf("%d \n", i);
    }while(i<10);
    int parcours2 = 0, apparait = 0;
    while(parcours2 < 10){
        if(t[parcours2] == cand){
            apparait++;
        }
        printf("indice : %d\n", parcours2);
        printf("nombre d'apparition : %d\n", apparait);        
        parcours2 ++;
    }
    printf("ligne 33");
    if(apparait > 10/2){
        *candidat = cand;
    }
    else{
        *candidat = -1;
        return;
    }
}

int main(void){
    int n, *candidat_final;
    srand(time(NULL));
    scanf("%d", &n);
    int t[10];
    for(int i = 0; i<=9; i++){
        t[i]=rand()%(n);
        //printf("%d\n", t[i]);
    }
    trouve_candidat(t, candidat_final);
    printf("candidat : %d \n", *(candidat_final));
}
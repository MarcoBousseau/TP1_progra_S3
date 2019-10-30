#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int trouve_candidat(int * t, int *philippe){
    int majorite = 0, candidat_interne;
    for(int j = 0; j<10; j++){
        if(majorite == 0){
            candidat_interne = t[j];
            majorite++;
        }
        else{
            if (candidat_interne == t[j]){
                majorite++;
            }
            else{
                majorite--;
            }
        }
    }
    printf("candidat fin boucle 1 : %d \n", candidat_interne);
    int apparait = 0;
    for(int h = 0; h<10; h++){
        if(candidat_interne == t[h]){
            apparait++;
        }
    }
    printf("apparait : %d\n", apparait);
    if(apparait>5){
        *philippe = candidat_interne;
    }
    else{
        *philippe = -1;
    }
}

//la fonction verifie_candidat est contenue dans trouve_candidat

int main(){
    int n, t[10], candidat;
    int *ad_candidat;
    ad_candidat = &candidat;
    srand(time(NULL));
    scanf("%d", &n);
    printf("t = [");
    for(int i=0; i<10; i++){
        t[i] = rand()%n;
        printf(" %d ", t[i]);
    }
    printf("]\n");
    trouve_candidat(t, ad_candidat);
    printf("candidat : %d \n", candidat);
}
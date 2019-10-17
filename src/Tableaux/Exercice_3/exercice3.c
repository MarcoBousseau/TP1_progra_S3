#include <time.h>
#include <stdlib.h>
#include <stdio.h>

void trouve_candidat(int *t, int *candidat){
    int i=0, majorite, candidat;
    while(i< 10){
        canditdat=t[i];
        if (candidat==t[i+1]){
            majorite++;
            i++;
        }
        else{
            if(majorite==1){
                candidat=// demander a roxane
            }
        }
    }
}

int main(void){
    int n;
    srand(time(NULL));
    scanf("%d", &n);
    int t[10];
    for(int i = 0; i<=n-1; i++){
        t[i]=(rand()%n);
    }
}
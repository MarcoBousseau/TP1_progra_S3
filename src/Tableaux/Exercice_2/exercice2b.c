#include <stdio.h>
#include <math.h>
#define TAILLE 100000

int crible_utile(int *t)
{
    int i;
    i = 2;
    while(i <= TAILLE)
    {
        t[i] = 1;
        i++;
    }

    for(int step = 2; step <= sqrt(TAILLE); step++)
    {
        if(t[step] == 1)
        {
            for(int step2 = 2; (step2*step) <= TAILLE; step2++)
            {
                t[step*step2] = step;
            }
        }
    }
}

int decomposition(int *t, int val){
    int f1=t[val], i=val;
    while((0<=i)&&(i<=val)){
        if(i*f1 == val){
            if(t[i]==1){
                printf("%d * %d \n", i, f1);
            }
            else{
                printf("%d * ", f1);
                decomposition(t, i);
            }
            break;
        }
        else{
            i--;
        }
    }
    if((i == -1)&&(t[val]==1)){
        printf("%d est premier \n", val);
    }
}


int main(void)
{
    int t[TAILLE], entree;
    crible_utile(t);
    scanf("%d", &entree);
    decomposition( t, entree);
}

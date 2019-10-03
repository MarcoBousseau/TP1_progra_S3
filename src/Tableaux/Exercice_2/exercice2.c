#include <stdio.h>
#include <math.h>
#define TAILLE 100000

void decomposition(int *t, int size)
{
    for(int i = size; i >= 0; i--)
    {
        printf("%d ", t[i]);
    }
    printf("\n");
}


int crible(int *t)
{
    int i;
    i = 1;
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
            t[step] = step;
        }
    }
}



int main(void)
{
    int t[TAILLE], entree;
    crible(t);
    while(1 < 2)
    {
        scanf("%d", &entree);
        if(entree < 0)
        {
            break;
        }
        else if(entree >= TAILLE)
        {
            continue;
        }
        else
        {
            if(t[entree] == 1)
            {
                printf("%d est un nombre premier \n", entree);
            }
            else
            {
                printf("%d n'est pas un nombre premier \n", entree);
            }
        }
    }
}

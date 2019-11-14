#include <stdio.h>
#include <ctype.h>

int lire_fin_ligne()
{
    char n;
    int nb = 0;
    n=getchar();
    while(n != '\n'){
        if(isspace(getchar())){}
        else{nb++;}
        n=getchar();
    }
    return ++nb;
}
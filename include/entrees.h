#ifndef VARIABLE
#define VARIABLE
// "../src/Entrees_Sorties/Exercice_7/exercice7_c"
#endif

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

/*getchar va lire dans le buffer (sorte de poubelle de saisie ou est stocke tout ce qui est saisis et 
qui n'est pas utilisé) et prend les char lettre par lettre*/

void lire_entier(int *entier){
	int val;
	int n;
	//lire_fin_ligne(buffer);	
	    do{
	    	val = scanf("%d", entier);
	    	n = lire_fin_ligne();
	    }while((n != 0)||(val!=1));
}

void lire_decimal(int *entier){
	int val;
	int n;
	//lire_fin_ligne(buffer);	
	    do{
	    	val = scanf("%f", entier);
	    	n = lire_fin_ligne();
	    }while((n != 0)||(val!=1));
}
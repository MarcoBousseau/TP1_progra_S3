#include <stdio.h>
#include <ctype.h>


void lire_decimal(int *entier){
	int val;
	int n;
	//lire_fin_ligne(buffer);	
	    do{
	    	val = scanf("%f", entier);
	    	n = lire_fin_ligne();
	    }while((n != 0)||(val!=1));
}
#include <stdio.h>

int main()
{
    
    char c;
    scanf("%c", &c);
    if(('a' <= c) && (c <= 'z'))
    {
        printf("Type de c : lettre minuscule \n");
    }
    else if(('A' <= c) && (c <= 'Z'))
    {
        printf("Type de c : lettre majuscule \n");
    }
    else if(('0' <= c) && (c <= '9'))
    {
        printf("Type de c : chiffre \n");
    }
    //lire un caractere ://
    
    //1ere technique//
    //char c;//
    //c = getchar();//
    
    //2e technique//
    //char c;//
    //scanf("%c", &c);//
}
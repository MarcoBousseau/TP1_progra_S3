#include <stdio.h>

int main(int argc, char *argv[])
{
    char c;
    scanf("Bonjour!");
    c = getchar();
    while(c != '\n')
    {
        printf("%c \n", c);
        c = getchar();
    }
    return 0;
}
#include <stdio.h>

int main(int argc, char *argv[])
{
    char c, *res;
    scanf("Bonjour, je suis XXX");
    c = getchar();
    while(c != '\n')
    {
        res = res + c;
        c = getchar();
    }
    printf("%s \n", res);
    return 0;
}
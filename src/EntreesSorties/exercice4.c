#include <stdio.h>

int main( int argc , char *argv[])
{
    printf("%s\n", argv[0]); fflush (stdout ) ;
    printf("%p\n", argv[1]);fflush (stdout ) ;
    printf("%s\n", argv[23]);fflush (stdout ) ; 
}
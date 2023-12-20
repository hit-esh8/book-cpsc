#include <stdio.h>
#include <stdlib.h>

/* Lost bytes - Program that calls malloc but not free
   Check with Valgrind         --leak-check=yes option
   To free memory use          free(s) 
*/

int
main(int argc, char **argv)
{
    char *s;

    s = malloc(26);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* Allocating after freeing memory
   To Test use            valgrind
   To rectify remove      free(s)
*/

int main (int argc, char **argv)
{
    char *s;

    s = malloc(2);
    free(s);

    s[0] = 'a';
    s[1] = '\0';

    puts(s);

    return 0;
}


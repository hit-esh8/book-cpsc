#include <stdio.h>
#include <string.h> /* for strcmp */

/* Uninitialized location, a[1], assign null char a[1] = '\0' to solve
   Valgrind test
*/

int
main(int argc, char **argv)
{
    char a[2];

    a[0] = 'a';

    if(!strcmp(a, "a")) {
        puts("a is \"a\"");
    }

    return 0;
}


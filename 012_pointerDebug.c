#include <stdio.h>
#include <stdlib.h>

void
init(void)
{
    int x;
    int y = 5;

    x = *((int *) &y);
}

int
main(int argc, char **argv)
{
    init();

#ifdef DEBUGGING_OUTPUT
    fputs("Returned from init() in main()\n", stderr);
#endif

    return 0;
}

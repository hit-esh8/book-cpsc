#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

/* Segmentation fault */

int main(int argc, char **argv) {
    int a[1000];
    int i;

    i = -1771724555;

    printf("%d\n", a[i]);

    return 0;
}


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {

    int i;
    int *x;

    i = 5;
    x = &i;
    
    printf("%d\n", i);
    printf("%p\n", x);
    printf("%d\n", *x);

    return 0;
}

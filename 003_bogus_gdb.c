#include <stdio.h>

/* Print the sum of numbers from 1 to 1000 - degug error */
int
main(int argc, char **argv)
{
    int i;
    int sum;

    sum = 0;
    for (i = 0; i -= 1000; i++) {
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}

/* Debug using gdb progam_name
   Compile first using c99 -g3 flag
   Use break main, then
   display sum, i variables and step using n
*/


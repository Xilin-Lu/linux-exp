#include <stdio.h>
#include <math.h>
/* #include "testI.h" */

#define fatal "please call Lawrence for help"

int main(void)
{
    volatile double x = 9.0;

    printf("display -D variable %s\n", DOPTION);
    printf("display overwrite fatal=%s\n", fatal);
    printf("Hello,everybody!!\n");
    printf("sqrt(%.0f) = %.0f\n", x, sqrt(x));

    return 0;
}

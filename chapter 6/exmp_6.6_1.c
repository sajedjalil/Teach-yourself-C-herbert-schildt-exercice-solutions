#include <stdio.h>

int main (void) {
    float *fp , **mfp, val;

    fp = &val;
    mfp = &fp;

    **mfp = 123.903;

    printf("%f %f", val , **mfp);

    return 0;
}

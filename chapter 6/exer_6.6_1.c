#include <stdio.h>

int main (void) {
    int *fp , **mfp, val;

    fp = &val;
    mfp = &fp;

    **mfp = 123;

    printf("%p %p %p", &val , &fp, &mfp);

    return 0;
}

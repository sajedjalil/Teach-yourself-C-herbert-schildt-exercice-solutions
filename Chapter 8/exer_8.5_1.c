#include <stdio.h>

int main (void)
{
    int i=2;

    printf("%-10s %-10s %-10s\n", "Number", "Square", "Cube");
    for( ; i<101; i++) printf("%-10ld %-10ld %-10ld\n", i , i*i, i*i*i);

    return 0;
}

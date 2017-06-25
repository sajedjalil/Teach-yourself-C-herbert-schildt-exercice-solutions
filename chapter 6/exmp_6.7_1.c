#include <stdio.h>

void my_puts (char *p);

int main (void) {
    my_puts("This is a test");
}

void my_puts (char *p) {
    while (*p) {
        printf("%c", *p++);
    }
    printf("\n");
}

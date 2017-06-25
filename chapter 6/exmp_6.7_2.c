#include <stdio.h>

void my_strcpy (char *p, char *q);

int main (void) {
    char str1[80];

    my_strcpy(str1 ,"This is a test");

    printf(str1);

    return 0;
}

void my_strcpy (char *p, char *q) {
    while (*q) {
        *p++ = *q++;
    }
    *p = '\0';
}

#include <stdio.h>

int main () {
    char str1[80];
    char *p;

    printf("Enter a string\n");
    gets(str1);

    p= str1;

    while (*p != ' ' && *p){
        p++;
    }
    p++;

    printf(p);

    return 0;
}

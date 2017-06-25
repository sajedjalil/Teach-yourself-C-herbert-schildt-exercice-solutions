#include <stdio.h>
#include <string.h>

int main () {
    char *p = "stop";
    char str[80];

    do {
        printf("Enter a string\n");
        gets(str);
    } while ( strcmp(p, str));

    return 0;
}

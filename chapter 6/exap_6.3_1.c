#include <stdio.h>
#include <ctype.h>

int main () {
    char str[80], *p;

    printf("Enter a string\n");
    gets(str);

    p= str;

    while (*p) {
        *p++ = toupper(*p);
    }

    printf("%s\n", str);

    p= str;

    while (*p) {
        *p++ = tolower(*p);
    }

    p= str;
    printf(p);

    return 0;
}

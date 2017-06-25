#include <stdio.h>

int main () {
    char ch;

    printf("Enter a character\n");
    ch = getchar();
    printf("The ASCI code for %c is %d\n", ch, ch);

    return 0;

}

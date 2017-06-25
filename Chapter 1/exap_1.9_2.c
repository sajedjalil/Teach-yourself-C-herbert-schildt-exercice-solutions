#include <stdio.h>
void outchar(char ch);

int main (void) {
    outchar('A');
    outchar('B');
    outchar('C');

    return 0;
}

void outchar (char ch) {

    printf("%c", ch);
}
#include <stdio.h>

int xor (int x, int y);

int main () {
    int p,q;
    printf("Enter P (0 or 1)\n");
    scanf("%d", &p);
    printf("Enter Q (0 or 1)\n");
    scanf("%d", &q);

    printf("P && Q: %d\n", p && q);
    printf("P || Q: %d\n", p || q);
    printf("P XOR Q: %d\n", xor(p,q));

    return 0;
}

int xor (int x, int y) {
    return ( (x||y) && !(x && y) );
}

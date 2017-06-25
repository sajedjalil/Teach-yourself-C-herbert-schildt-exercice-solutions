#include <stdio.h>

int main () {
    char text [10] [80];
    int i;

    for (i=0; i<10; i++) {
        printf("%d ", i+1);
        gets(text[i]);
    }

    do {
        printf("Enter the number of string\n");
        scanf("%d", &i);
        i--;
        if(i>=0 && i<10) {
            printf(text[i]);
            printf("\n");
        }
    } while (i>=0);

    return 0;
}

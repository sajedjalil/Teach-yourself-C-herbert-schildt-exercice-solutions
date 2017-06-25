#include <stdio.h>
int main (void) {
    int len, width;

    printf("Enter your length\n");
    scanf("%d", &len);
    printf("Enter your width\n");
    scanf("%d", &width);
    printf("Area is %d", len*width);

    return 0;
}
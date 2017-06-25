#include <stdio.h>

int main () {
    int i,j;
    printf("Enter the first number\n");
    scanf("%d", &i);
    printf("Enter the second number\n");
    scanf("%d", &j);

    /* relational operators */
    printf("i < j %d\n", i<j);
    printf("i <= j %d\n", i<=j);
    printf("i == j %d\n", i==j);
    printf("i >= j %d\n", i>j);
    printf("i >= j %d\n", i>=j);
    printf("i != j %d\n", i!=j);

    /* logical operators */
    printf("i || j %d\n", i||j);
    printf("i && j %d\n", i&&j);
    printf("!i  !j %d %d\n", !i, !j);

    return 0;
}

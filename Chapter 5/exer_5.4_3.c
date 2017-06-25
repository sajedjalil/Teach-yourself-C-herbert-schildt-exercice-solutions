#include <stdio.h>

int main () {
    int atto [][3] = {
     1,1,1,
     2,4,8,
     3,9,27,
     4,16,64,
     5,25,125,
     6,36,216,
     7,49,343,
     8,64,512,
     9,81,729,
     10,100,1000
    };

    int i,j;

    printf("Enter one cube\n");
    scanf("%d", &i);

    for ( j=0; j<10 ;j++ ) {
        if (i == atto[j][2]) {
            printf("cube root: %d  and root's square: %d", atto [j][0], atto[j][1]);
            break;
        }
    }
    if (j==10)printf("No roots found\n");

    return 0;
}

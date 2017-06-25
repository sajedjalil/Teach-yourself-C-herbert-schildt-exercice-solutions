#include <stdio.h>

int main () {
    int atto [3][3][3];
    int i,j,k,l=0;
    int sum=0;

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            for(k=0; k<3; k++) {
                atto [i][j][k] = ++l;
                sum=sum+l;
            }
        }
    }
    printf("%d\n",sum);
    return 0;
}

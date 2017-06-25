/*This program converts Earth days into Jovian years*/
#include <stdio.h>

int main (void) {
    int earth_days; /* number of earth days */

    /*Get no. of earth days */
    printf("enter the no. of earth days\n");
    scanf("%d", &earth_days);

    /*displays the result */
    printf("%.3f", ((float)earth_days/365.0)*12);

    return 0;
}

/*prime number tester*/
#include <stdio.h>

int main () {
    int num, flag, count;
    printf("Enter the number to be tested");
    scanf("%d", &num);

    flag=1;
    for(count=2; count <= num/2; count++) {
        if (num%count==0) {
            flag=0;
            break;
        }
    }
    if (flag==1) printf("%d is a prime",num);
    else printf("Not prime");

    return 0;
}

#include <stdio.h>

int main () {
    int ans, count;
    for(count=1; count <11; count++) {
        printf("What is %d + %d = ?\n",count,count);
        scanf("%d", &ans);

        if (ans == count+count) printf("Right\n");
        else {
            printf("Wrong\n");
            printf("Try again\n");

            printf("What is %d + %d = ?\n",count,count);
            scanf("%d", &ans);

            /* nested if */
            if (ans == count+count) printf("Right\n");
            else {
                printf("Wrong\n");
                printf("Answer is %d\n", count + count);
            }
        }
    }
    return 0;
}

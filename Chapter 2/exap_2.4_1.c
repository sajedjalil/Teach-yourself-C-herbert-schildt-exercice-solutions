#include <stdio.h>

int main () {
    int ans, count;
    for(count=1; count <11; count=count+1) {
        printf("What is %d + %d = ?\n",count,count);
        scanf("%d", &ans);

        if (ans== count+count) printf("Right\n");
        else {
            printf("Wrong\n");
            printf("Answer is %d+%d\n", count + count);
        }
    }
    return 0;
}

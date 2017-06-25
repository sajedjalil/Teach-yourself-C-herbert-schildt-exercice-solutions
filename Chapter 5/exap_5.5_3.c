#include <stdio.h>

int main () {
    char text[][80] ={
     "When" , "in" , "the",
     "course", "of" , "human",
     "events", ""
    };

    /* now displays items */
    int i, j;

    for(i=0; text[i][0]; i++){
        for(j=0; text[i][j]; j++) printf("%c", text[i][j]);

        printf(" ");
    }

     return 0;
}

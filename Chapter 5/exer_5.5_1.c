#include <stdio.h>

int main () {
    char words [][10] = {
     "I" , "We",
     "no", "you",
     "year", "he",
     "child", "go",
     "I", "race",
    };

    int i;
    char ch;

    printf("Enter a digit\n");
    scanf("%c", &ch);

    ch=ch-'0';

    for (i=0; words[i][0]; i++) {
        if (ch==i+1) printf(words[i]);
    }

    return 0;
}

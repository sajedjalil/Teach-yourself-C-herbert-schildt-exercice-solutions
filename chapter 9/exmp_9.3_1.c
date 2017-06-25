#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *arv[]){
    FILE *from, *to;
    char ch;

    //no. of command line arguments
    if(argc != 3) {
        printf("Usage copy <source> <destination>\n");
        exit(1);
    }

    //open source file
    if ( (from = fopen(argv[1],"rb"))== NULL) {
        printf("Cannot open the source file\n");
        exit(1);
    }

    //open destination file
    if ( (to = fopen(argv[2],"wb"))== NULL) {
        printf("Cannot open the destination file\n");
        exit(1);
    }

    //copy the file
    while(!feof(from)) {
        ch= fgetc(from);
        if(ferror(from)) {
            printf("Error in source reading\n");
            exit(1);
        }

        if(!feof(from)) fputc(ch, to);
        if(ferror(to)) {
            printf("Error in destination reading\n");
            exit(1);
        }
    }

    if(fclose(from)==EOF) {
        printf("Error in closing source file\n");
        exit(1);
    }

    if(fclose(to)==EOF) {
        printf("Error in closing destination file\n");
        exit(1);
    }

    return 0;
}

// simulation of 100 minute spaceship flight recorder

#include <stdio.h>
#include <stdlib.h>

//all fields indicate OK if 1,
//malfunctioning or low if zero

struct telemetry {
    unsigned fuel: 1;
    unsigned radio: 1;
    unsigned tv: 1;
    unsigned water: 1;
    unsigned food: 1;
    unsigned waste: 1;
  } flt_recd;

 void display(struct telemetry i);

 int main (void) {
    FILE *fp;
    int i;

    if((fp=fopen("flight", "wb"))== NULL) {
        printf("Cannot open file\n");
        exit(1);
    }

    //We imagine report is recorded in every minute

    for(i=0; i<100; i++) {
        flt_recd.fuel = rand()%2;
        flt_recd.radio = rand()%2;
        flt_recd.tv = rand()%2;
        flt_recd.water= rand()%2;
        flt_recd.radio = rand()%2;
        flt_recd.tv = rand()%2;

        display(flt_recd);
        fwrite(&flt_recd, sizeof flt_recd, 1, fp);
    }

    fclose(fp);

    return 0;
 }


 void display (struct telemetry i) {
    if(i.fuel) printf("Fuel OK\n");
    else printf("Fuel low\n");
    if(i.radio) printf("Radio OK\n");
    else printf("Radio failure\n");
    if(i.tv) printf("TV OK\n");
    else printf("TV malfunction\n");
    if(i.water) printf("Water OK\n");
    else printf("Water supply down\n");
    if(i.food) printf("Food OK\n");
    else printf("Food supply low\n");
    if(i.waste) printf("Waste OK\n");
    else printf("Waste containment failure\n");
    printf("\n");
 }

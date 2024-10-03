#include<stdio.h>

int main (void) {

    int year;

    printf("--Scopri che anno e`-- \n");
    printf("Inserire anno: ");
    scanf("%d", &year);

    if (year %400 == 0) {
        printf("anno e` secolare");
    }

    else if (year %4 == 0) {
        printf("anno e` bisestile");
    }

    else {
        printf("anno e` normale");
    }


    return 0;
}
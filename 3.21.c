#include<stdio.h>

int main (void) {


    int year, month, day;
    char month_name;

    printf("--Controllo della data-- \n");
    printf("Inserire l`anno: ");
    scanf("%d", &year);
    printf("Inserire il mese: ");
    scanf("%d", &month);
    printf("Inserire giorno: ");
    scanf("%d", &day);

    if (month <= 12 && month >= 1) {

        switch(month) {

            //volevo scirvere il nome completto "Gennaio", ma con solo char non si riesce, ci vuole char[][] ect.

            case 1:
            //printf("mese inserito e` gennaio \n");
            month_name = 'G';
            break;

            case 2:
            //printf("mese inserito e` febbraio \n");
            month_name = 'F';
            break;

            case 3:
            //printf("mese inserito e` marzo \n");
            month_name = 'M';
            break;

            case 4:
           // printf("mese inserito e` aprile \n");
           month_name = 'A';
            break;

            case 5:
            //printf("mese inserito e` maggio \n");
            month_name = 'M';
            break;

            case 6:
            //printf("mese inserito e` giugno \n");
            month_name = 'G';
            break;

            case 7:
            //printf("mese inserito e` luglio \n");
            month_name = 'L';
            break;

            case 8:
            //printf("mese inserito e` agosto \n");
            month_name = 'A';
            break;

            case 9:
            //printf("mese inserito e` settembre \n");
            month_name = 'S';
            break;

            case 10:
            //printf("mese inserito e` ottobre \n");
            month_name = 'O';
            break;

            case 11:
            //printf("mese inserito e` novembre \n");
            month_name = 'N';
            break;

            case 12:
            //printf("mese inserito e` dicembre \n");
            month_name = 'D';
            break;
            
            default:
            printf("mese inserito non e` correto");
            break;

        }

        // controllo aprile giugno settembre
        if (month == 4 || month == 6 || month ==9) {
            if(day > 30) {
                printf("Giorno inserito non e` corretto! \n");
            }

        }
        
        // controllo febbraio
        if (month == 2) {
            if(day > 28) {
                printf("Giorno inserito non e` correto");
            }

            else {
            // tutto a posto
            printf("la data inserita e` \n anno: %d \n mese: %c \n giorno: %d", year, month_name, day);
        }
            
        }

        else {
            // tutto a posto
            printf("la data inserita e` anno: %d \n mese: %c \n giorno: %d", year, month_name, day);
        }

    }

    else {
        printf("Mese inseritto non e` corretto! \n");
    }
  


    return 0;
}
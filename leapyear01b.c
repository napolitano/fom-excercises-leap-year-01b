#include <stdio.h>

int main () {
    int year = 0;

    printf("Bitte geben Sie eine Jahreszahl ein:");
    scanf("%d", &year);

    printf("%d ist ", year);

    if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        printf("ein");
    } else {
        printf("kein");
    }

    printf(" Schaltjahr");

    return 0;
}

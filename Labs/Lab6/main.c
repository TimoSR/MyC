// lab6.c
#include <stdio.h>

#define CONSTANT1 50
char charVariable1 = 50;
char charVariable2 = 100;
int intVariable1 = 1000;
int intVariable2 = 10000;
long longVariable1 = 1000;
long longVariable2 = 2000;
float floatVariable1 = 34.5678;
float floatVariable2 = 156.78956;

int main(void);

int main(void) {

    if ((floatVariable1 <= floatVariable2) && (charVariable1 <= charVariable2)) {

        intVariable1++;


    } else if (50 <= floatVariable1) {

        intVariable2--;


    } else {

        charVariable2 = 1;


    }
    while (1);

}
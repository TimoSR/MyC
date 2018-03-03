/*
 *
 *
 *
 *
 *
 */


#include <stdio.h>

char programName[] = "Lab1";
float version = 0.1;
int year = 2018;


int main(void);

int main() {

    float celsius, fahrenheit;

    printf("%s - version: %f \n", programName, version);

    printf("year: %d \n", year);

    while (1) {

        printf("Please enter the temperature in celciuse: \n");
        scanf("%f", &celsius);

        fahrenheit = (9/5.0)*celsius + 32;

        printf("%.2f Celcius = %.2f Fahrenheit \n\n", celsius, fahrenheit);

        if (!celsius) {

            for (int i = 0; i < 3; i++) {

                printf("0 is ok \n");

            }

    }

    return 0;

}
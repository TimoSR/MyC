#include <stdio.h>

int main() {

    int a = 1;

    int i;
    int first_Natural_Number;
    int amount_Of_Even;
    int amount_Of_Odd;
    float average_Even;
    float average_Odd;

    while (a != 0) {

        scanf("%d", &a);

        if (a == 0) {

            break;

        }

        if (a > 0) {

            first_Natural_Number = a;



        }

        if (a % 2 == 0) {

            amount_Of_Even++;

            int accumulated;

            accumulated += a;

            if (accumulated != 0 && accumulated > 0) {

            average_Even = (float) (accumulated / amount_Of_Even);

            }

        }

        if (a % 2 != 0) {

            amount_Of_Odd++;

            int accumulated;

            accumulated += a;


            if (accumulated != 0 && accumulated > 0) {

            average_Odd = (float) (accumulated / amount_Of_Odd);

            }

        }

        i++;

    }

    printf("Integers Typed: %d\n"
           "First Natural Number entered: %d\n"
           "Even Integers: %d\n"
           "Odd Integers: %d\n"
           "Average of the even: %f\n"
           "Average of the odd: %f\n",
           i, first_Natural_Number, amount_Of_Even, amount_Of_Odd, average_Even, average_Odd);

    return 0;
}
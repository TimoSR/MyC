#include <stdio.h>

int is_prime(int num);

int main() {

    int input = 1;
    int counter;
    int first_Natural_Number;
    int amount_Of_Even;
    int amount_Of_Odd;
    int accumulated_Even;
    float accumulated_Odd;
    float average_Odd;
    float average_Even;

    while (input != 0) {

        scanf("%d", &input);

        if (input == 0) {

            break;

        }

        if (input > 0 && counter == 0) {

            first_Natural_Number = input;

        }

        if (input % 2 == 0) {
            amount_Of_Even++;
            accumulated_Even += input;
        }
        if (input % 2 != 0) {
            amount_Of_Odd++;
            accumulated_Odd += input;
        }

        counter++;

    }

    if (amount_Of_Even > 0) {

        average_Even = ((float)accumulated_Even / (float)amount_Of_Even);

    }

    if (amount_Of_Odd > 0) {

        average_Odd = (accumulated_Odd / amount_Of_Odd);

    }


    printf("\nIntegers Typed: %d\n"
           "First Natural Number entered: %d\n"
           "Even Integers: %d\n"
           "Odd Integers: %d\n"
           "Average of the even: %f\n"
           "Average of the odd: %f\n",
           counter, first_Natural_Number, amount_Of_Even, amount_Of_Odd, average_Even,
           average_Odd);

    printf("\nAll natural numbers less than the first natural number, \n"
           "which cannot be represented as input sum of two prime numbers \n");

    int count;

    for (int j = first_Natural_Number; j >= 2; j--) {

        if (j == first_Natural_Number) {

            j--;

        }


        if (is_prime(j) == 1) {

            printf("\n%d\n", j);

        }

        count++;

    }

    return 0;
}

int is_prime(int num) {

    if (num <= 1) return 0;
    if (num % 2 == 0 && num > 2) return 0;
    for (int i = 3; i < num / 2; i += 2) {
        if (num % i == 0)
            return 0;
    }
    return 1;

}
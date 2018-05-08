#include <stdio.h>

int main() {

    int array_Length;

    int *a = &array_Length;

    puts("Please give an array size!");

    scanf(" %d",a);

    int b[array_Length];

    puts("Here is your array!");

    for (int i = 1; i <= array_Length ; ++i) {

        b[i] = i;

        printf("%d ", b[i]);

    }

}
#include <stdio.h>

int main() {

    float n = 8;

    printf("%f", calpi(n));

    return 0;

}

float calpi(float n) {

    if (n == 0) {

        return ((float) 1);

    }

    float sum = 1/((2*n)+1);

    return (sum + calpi (n - 1));

}
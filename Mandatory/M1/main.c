#include <stdio.h>

double calpi(double precession);

int main() {

    printf("%lf\n", calpi(9999));

    return 0;
}


double calpi(double precession) {

    double counter = 1.0;
    double donominator = 1.0;
    double cal;

    for (int i = 1; i < precession-1; i++) {

        cal =+ counter/donominator ;

        printf("%lf %lf \n", counter, donominator);

        donominator+2;

    }

    return (double) cal*4.0;

}


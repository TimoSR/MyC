#include <stdio.h>

double findPI(double y);

int main() {

    double n = 6;

    printf("%lf", findPI(n));



}







double findPI(double n) {


    for (int i = 0; i <= n-1; i++ ) {

        double sum = 0;

        int position = i+1;

        double cal = 1/((n*2)+1);

        if (position % 2 == 0) {

            cal *= -1;

        }

        sum += cal;



    }



}
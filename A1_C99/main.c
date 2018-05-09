#include <stdio.h>

void calPi(int);

int main() {

    //initiating precision of pi.

    int precision = 200000;

    calPi(precision);

    return 0;

}

//Calculating Pi

void calPi(int precision) {

    int x = 1;
    int d = x;
    double cal;
    double result;


    for (int i = 1; i <= precision-1 ; ++i) {

        cal = (double)x/(double) d;


        if(i%2 == 0) {

            cal = -1*cal;

        }

        result += cal;

        d += 2;

    }

    printf("%.6lf\n",result*4);

}


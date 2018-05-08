#include <stdio.h>
#include <stdlib.h>


typedef struct {

    int x, y;

} POINT;

typedef struct {

    POINT point1, point2;
    int *length;

} ROOF;

ROOF roof_Info_wrt(int x1, int y1, int x2, int y2);

void print_Roof(ROOF read);

ROOF sort[](ROOF collection[]);

int main() {

    int x1, y1, x2, y2;

    int number_of_roofs;
    int *number_of_roofs_ptr = &number_of_roofs;
    printf("How many roofs?\n");
    scanf("%d", &number_of_roofs);

    ROOF roof_Collection[*number_of_roofs_ptr];

    printf("Please enter coordinates\n");

    for (size_t i = 0; i < *number_of_roofs_ptr; i++) {

        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        roof_Collection[i] = roof_Info_wrt(x1, y1, x2, y2);
        print_Roof(roof_Collection[i]);



    }

    return 0;
}

ROOF roof_Info_wrt(int x1, int y1, int x2, int y2) {

    POINT first;
    POINT second;
    first = (POINT) {.x=x1, .y=y1};
    second = (POINT) {.x=x2, .y=y2};
    ROOF roof;
    int length = abs(x1 - x2);
    roof = (ROOF) {.point1 = first, .point2 = second, .length = length};
    return roof;
};

void print_Roof(ROOF read) {

    printf("Point1 = x1: %d y1: %d\n"
           "Point2 = x2: %d y2: %d\n"
           "Length = %d\n", read.point1.x, read.point1.y, read.point2.x, read.point2.y, read.length);

};

ROOF sort[](ROOF collection[]) {

    for (int j = 1; j <  ; ++j) {

    }

};

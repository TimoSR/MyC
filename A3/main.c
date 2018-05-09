#include <stdio.h>
#include <stdlib.h>

typedef struct {

    int x, y;

} POINT;

typedef struct {

    POINT point1, point2;
    int length;
    int total_Water_Drain;
    //int water_Stream;

} ROOF;

ROOF roof_Info_wrt(int x1, int y1, int x2, int y2);

void print_Roof(ROOF read);



//size_t getSize(float *ptr);

int main() {

    unsigned int x1, y1, x2, y2;
    ROOF hold;

    int number_of_roofs;

    int *number_of_roofs_ptr = &number_of_roofs;

    //Debugging
    //printf("How many roofs?\n");

    scanf("%d", &number_of_roofs);

    ROOF roof_Collection[*number_of_roofs_ptr];

    //Debugging
    //printf("Please enter coordinates\n");

    for (int i = 0; i < *number_of_roofs_ptr; ++i) {

        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

        roof_Collection[i] = roof_Info_wrt(x1, y1, x2, y2);

        //For debugging
        //print_Roof(roof_Collection[i]);

        if (0 < i) {

            //My sorting of the roof elements

            for (int j = i; j > 0; j--) {

                //Debugging
                //printf("i %d, j %d\n", i, j);

                if (roof_Collection[j - 1].point1.x > roof_Collection[j].point1.x) {

                    hold = roof_Collection[j - 1];
                    roof_Collection[j - 1] = roof_Collection[j];
                    //print_Roof(roof_Collection[j-1]);
                    roof_Collection[j] = hold;
                    //print_Roof(roof_Collection[j]);

                };
            }

        }
    }

    //printf("This is the roofs in descending order:\n");
    /*
    for (int k = 0; k < *number_of_roofs_ptr; k++) {

        printf("roof %d\n", k+1);
        print_Roof(roof_Collection[k]);

    }
    */
    //printf("Calculating Water drain\n");

    for (int l = 0; l < *number_of_roofs_ptr; l++) {

        int covered;

        int exposed_To_Water;

        if ((l + 1) > *number_of_roofs_ptr) { break; };

        if (roof_Collection[l].point1.x <= roof_Collection[l + 1].point1.x
            && roof_Collection[l].point2.x >= roof_Collection[l + 1].point1.x
            && roof_Collection[l].point2.x <= roof_Collection[l + 1].point2.x
            && roof_Collection[l].point1.y < roof_Collection[l + 1].point1.y
            && roof_Collection[l].point2.y < roof_Collection[l + 1].point2.y) {

            covered = roof_Collection[l].point2.x - roof_Collection[l + 1].point1.x;

            //printf("%d\n",covered);

            exposed_To_Water = roof_Collection[l].length - covered;

            //printf("%d\n", exposed_To_Water);

            roof_Collection[l].total_Water_Drain = exposed_To_Water;

            //print_Roof(roof_Collection[l]);

        }

        if (l > 0
            && (roof_Collection[l].point2.y > roof_Collection[l + 1].point2.y
                || roof_Collection[l].point1.x >= roof_Collection[l - 1].point2.x)
            && roof_Collection[l].point1.y > roof_Collection[l - 1].point1.y
            && (roof_Collection[l].point2.y > roof_Collection[l - 1].point2.y
                || roof_Collection[l].point1.x > roof_Collection[l - 1].point2.x)) {

            exposed_To_Water = roof_Collection[l].length;

            roof_Collection[l].total_Water_Drain = exposed_To_Water;

        }

        if (l > 0
            && roof_Collection[l].point1.x < roof_Collection[l - 1].point2.x
            && roof_Collection[l].point2.y < roof_Collection[l - 1].point1.y
            && roof_Collection[l].point2.x > roof_Collection[l - 1].point2.x) {

            exposed_To_Water = abs(roof_Collection[l].point1.x - roof_Collection[l - 1].point2.x);

            roof_Collection[l].total_Water_Drain = exposed_To_Water;

        }

    }

    /*

    for (int k = 0; k < *number_of_roofs_ptr; k++) {

        printf("\nroof %d\n", k + 1);
        print_Roof(roof_Collection[k]);

    }

     */

    //Calculating streams Total water drain;

    for (int m = 0; m < *number_of_roofs_ptr; ++m) {

        for (int i = 0; i < *number_of_roofs_ptr; ++i) {

            int lowest_Point_X;
            int lowest_Point_Y;

            if (m == i) {

                i++;

            }

            if (roof_Collection[m].total_Water_Drain == 0
                || roof_Collection[i].total_Water_Drain == 0) {

                break;

            }

            if (i < 2) {

                /*

                if  (m == *number_of_roofs_ptr-1) {

                    roof_Collection[m].water_Stream = roof_Collection[m].total_Water_Drain;

                }

                */

                if (roof_Collection[m].point1.y < roof_Collection[m].point2.y) {

                    lowest_Point_X = roof_Collection[m].point1.x;
                    lowest_Point_Y = roof_Collection[m].point1.y;


                }

                if (roof_Collection[m].point1.y > roof_Collection[m].point2.y) {

                    lowest_Point_X = roof_Collection[m].point2.x;
                    lowest_Point_Y = roof_Collection[m].point2.y;

                }

            }

            if ((roof_Collection[i].point1.x <= lowest_Point_X
                && roof_Collection[i].point2.x >= lowest_Point_X)
                && (roof_Collection[i].point1.y < lowest_Point_Y
                    || roof_Collection[i].point2.y < lowest_Point_Y )) {

                roof_Collection[i].total_Water_Drain += roof_Collection[m].total_Water_Drain;
                //roof_Collection[m].water_Stream = roof_Collection[m].total_Water_Drain;

            }

            /**

                if ((roof_Collection[i].point1.x >= roof_Collection[m].point1.x
                     && roof_Collection[i].point1.x <= roof_Collection[m].point2.x)
                    && roof_Collection[i].point1.y < roof_Collection[i].point2.y) {

                    roof_Collection[i].water_Stream == roof_Collection[i].water_Drain;
                    roof_Collection[m].water_Drain = +roof_Collection[i].water_Stream;

                }

            if (roof_Collection[m].point1.x)

            */
        }

    }


    for (int k = 0; k < *number_of_roofs_ptr; k++) {

        printf("\nroof %d\n", k + 1);
        print_Roof(roof_Collection[k]);

    }


/**
    printf("The bit space used in the array %u\n"
           "The total bit space available  in the array %u\n"
           "Bit space left %d\n"
           "Objects in the array %d\n",getSize(roof_Collection), sizeof(roof_Collection),(sizeof(roof_Collection)-getSize(roof_Collection)), (getSize(roof_Collection)/4));
*/
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
           "Length = %d\n"
           "Total Water Drain = %d\n"
           /*"Water Stream = %d\n"*/,
           read.point1.x, read.point1.y, read.point2.x, read.point2.y,
           read.length, read.total_Water_Drain/*, read.water_Stream*/);

};



/**
size_t getSize(float *ptr) {

    return sizeof(ptr);

}
*/



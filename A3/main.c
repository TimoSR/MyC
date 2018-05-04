#include <stdio.h>


struct point {

    int x,y;

};

struct lenght {



};

struct roof {

    struct point point1;
    struct point point2;
    int length;

};

size_t getSize(float *ptr);

int main() {

    int roofs[10] = {2,1};

    printf("The bit space used in the array %u\n"
           "The total bit space available  in the array %u\n"
           "Bit space left %d\n"
           "Objects in the array %d\n",getSize(roofs), sizeof(roofs),(sizeof(roofs)-getSize(roofs)), (getSize(roofs)/4));



    return 0;
}

size_t getSize(float *ptr) {

    return sizeof(ptr);

}




#include<stdio.h>
#include "lib.h"

struct point {
    int x;
    int y;
};

struct rect {
    struct point ll;		/* lower left */
    struct point ur;		/* upper right */
};

int main()
{
    struct rect r1, r2;

    scanrect("Podaj wspolrzedne prostokata1", &r1);

    scanrect("Podaj wspolrzedne prostokata2", &r2);

    printf("%i \n", disjointrect(r1, r2));

    return 0;
};
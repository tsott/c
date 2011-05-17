#include<stdio.h>
#include "lib.h"

struct point {
    int x;
    int y;
};

struct rect {
    struct point ll;	
    struct point ur;	
};

int main()
{
    struct rect r1, r2;

    scanrect("Podaj wspolrzedne prostokata1:", &r1);

    scanrect("Podaj wspolrzedne prostokata2:", &r2);

    printf("%i \n", rectinrect(r1, r2));

    return 0;
};
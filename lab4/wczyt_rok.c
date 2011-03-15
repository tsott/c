#include <stdio.h>

int wczyt_rok(int b)
{
    printf("Podaj bieżący rok (format YYYY):\n");
    scanf("%i", &b);
    return b;
}

#include<stdio.h>

int wczyt_wiek(int i)
{
	printf("Podaj swoj rok urodzenia (format YYYY):\n");
    scanf("%i", &i);
    return i;
}

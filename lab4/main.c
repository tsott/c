#include <stdio.h>
#include "wczyt_wiek.h"
#include "wczyt_rok.h"

int main()
{
    int i, a, b, leap;
    a = 0;
    i = wczyt_wiek();
    b = wczyt_rok();
    while (i <= b) 
{
if (leap = i % 4 == 0 && i % 100 != 0 || i % 400 == 0) 
{
a += 31622400;
} else {
a += 31536000;
}
i++;
}
      printf("Zyjesz %i sekund \n", a);

}


/* Program ten wykonuje konwersj. ze stopni na radiany
   wed.ug wzoru: rad = 2 * PI * deg / 360    */
#include <stdio.h>
#include <math.h>
int main() {
  double deg, rad;
  printf("Podaj kat w stopniach : ");
  scanf("%lf", &deg);
  rad =2 ;  /* grep PI /usr/include/math.h */
  printf("%lf deg = %lf rad\n", deg, rad);
  return 0;
}

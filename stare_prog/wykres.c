//Napisac program rysujacy wykres funkcji: f(x) = x * sin x

#include<stdio.h>
#include<math.h>

#define szer 100
#define wys 60
#define dol_x -5.5
#define gora_x 5.5
#define dol_y -6
#define gora_y 2.5


float  funkcja_b (float x) {
  //  return  ((x-2)*x-1)*x+2;
  return  x*sin(x);
}

char  rysunek[szer][wys];

void  rysuj(int x, int y, char znak) {
  if (0<=x && x<szer && 0<=y && y<wys)
    rysunek[x][y] = znak;
}

int  interpoluj (float x, float a, float b, int n) {
  return  floor((x-a)*n/(b-a));
}

int  f_b (int x) {
  return  interpoluj(funkcja_b((gora_x-dol_x)/szer*x+dol_x), dol_y, gora_y, wys);
}

main () {
  int  x,y, poziom, pion;

  printf("\nWYKRES FUNKCJI:\n\n ");

  for (x=0; x<szer; x=x+1)
    for (y=0; y<wys; y=y+1)
      rysuj(x, y, ' ');

  pion = interpoluj(0, dol_x, gora_x, szer);
  for(y=0; y<wys; y=y+1)
    rysuj(pion, y, '|');

  poziom = interpoluj(0, dol_y, gora_y, wys);
  for(x=0; x<szer; x=x+1)
    rysuj(x, poziom, '-');

  rysuj(pion, poziom, '+');

  for (x=0; x<szer; x=x+1) 
    rysuj(x, f_b(x), '*');

  for (y=wys-1; y>=0; y=y-1) {
    for (x=0; x<szer; x=x+1)
      printf("%c", rysunek[x][y]);
    printf("\n ");
  }

  printf("\n\n");
}



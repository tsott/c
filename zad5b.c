/* Program ten dla dw�ch liczb wczytanych z klawiatury
   wypisuje, kt�ra z nich jest wieksza. */
#include <stdio.h>

int main()
{   
int licz1, licz2 ;  
 printf("Podaj pierwsza liczbe: "); 
  scanf("%d", &licz1);  
 printf("Podaj druga liczbe: ");  
 scanf("%d", &licz2); 
  if (licz1>licz2)
{   
printf("Liczba %i jest wieksza od liczy %i.\n", licz1, licz2);  
}
else if(licz1<licz2)
{
printf("Liczba %i jest wieksza od liczy %i.\n", licz2, licz1);
}
else
{
printf("Liczba %i jest r�wna liczbie %i.\n", licz1, licz2);   
}        
return 0;
}
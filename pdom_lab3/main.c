#include <stdio.h>
#include <math.h>

#include "helpers.h"

int main()
{    
double sqrt(double a);
double a, b;
a = rzeczyw();
b = sqrt(a);  
if (a >= 0) 
{	
printf("Pierwiastek kwadraytowy z %f wynosi %f \n", a, b);
} 
else 
{	
printf("Podaj liczbe dodatnia\n");  
}   
 return 0;
}
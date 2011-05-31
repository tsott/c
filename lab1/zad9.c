//Napisac program liczacy wyznacznik macierzy kwadratowej

#include <stdio.h>

float det(int n, float a[n][n]){
int i, j, k, l,znak;
float wyn=0;
if(n==1)
return a[0][0];
    else{
        for(i=0; i<n; i++){
float b[n-1][n-1]:
        for(j=1; j<n; j++){
        for(k=0,l=0; k<n;k++){
        if(k!=i){
        b[j-1][l]=a[j][k];
        l++;
            }
            }
            }
znak=1;
if(i%2==1)
znak=-1;
wyn+=a[0][i]*znak*det(n-1, b);
}
return wyn;
}
}
int main(){
int n, i, j;
 printf("Podaj rozmiar n macierzy kwadratowej:");
scanf("%i", &n);
float a[n][n];
printf("\nPodaj elementy macierzy: ");
for(i=0; i<n; i++)
    for(j=0; j<n; j++)
scanf("%f", &a[i][j]);
printf("\nWyznacznik tej macierzy to: %f\n", det(n, a));
}



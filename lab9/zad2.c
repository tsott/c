#include<stdio.h>

int main()
{
	int t[4] = {2, 8, 1, 3};
	int *a[4];
	
	int i;
	
for ( i = 0; i < 4; i++) { 
	printf("%d", t[i]);
	}
	printf("\n");
	
for ( i = 0; i < 4; i++) { 
	a[i] =&t[i];
			
	//a[i]= t+i
	}
for ( i = 0; i < 4; i++) { 
}
a[0] =&t[2];
a[1] =&t[0];
a[2] =&t[3];
a[3] =&t[1];
	
for ( i = 0; i < 4; i++) { 
	printf("%d", *a[i]);  
	;
	}
  return 0;
}


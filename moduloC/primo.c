#include <stdio.h>

void primos(int primo){
  int i,j,a;
printf("\nLos numeros primos encontrados son:\n");
  for (i=1;i<=primo;i++)
    {
a=0;
      for (j=1;j<=i;j++)
	{
	  if (i%j==0)
	    a++;
	}
      if (a == 2)
	printf("%d ",(j-1));
    }
printf("\n\n");
  return;
}

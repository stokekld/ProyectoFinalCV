#include <stdio.h>
#include <math.h>
#include  "primo.h"

int main()
{
  int num1;
  double num2;
  printf("\nIntruce el limite de primos que quieres: ");
  scanf("%d",&num1);
  num2 = sqrt((double)num1);
  printf("\nLa raiz cuadra de ese numero es %f\n",num2);


  primos(num1);

  return 0;
}

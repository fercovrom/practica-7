/*Covarrubias Romero Fernando
estructura de control de flujo if-else*/

#include<stdio.h>

int main()
{
  int num;
  printf("ingreser un numero\n");
  scanf("%d",&num);
  if( num%2 == 0 )
{
  printf("El número %d es par.\n",num);
}
  else
{
  printf("El número %d es impar.\n",num);
}
  return 0;
}

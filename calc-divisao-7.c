#include <stdio.h>
#include <stdlib.h>
int main ( )
{
int n, area1;
float resto;
printf("Digite Valor Para dividir por 7 \n");
scanf("%d",&n);
resto=(float)(n%7);
printf("sobrou foi %d",n);
printf("/7=");
printf("%.1f",resto);
return ( 0 );
}

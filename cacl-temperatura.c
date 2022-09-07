#include <stdio.h>
#include <stdlib.h>
int main()
{
double fah;
int cels;
printf("Leia Temperatura Cels: \n");
scanf("%d",&cels);
fah = (cels*1.8) + 32;
printf("Fah e igual a = %lf",fah);
return 0;
}

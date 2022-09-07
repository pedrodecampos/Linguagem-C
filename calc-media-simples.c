#include <stdio.h>
#include <stdlib.h>
int main()
{
int x,y,z,p,media;
printf("Digite o valor de x: \n");
scanf("%d", &x);
printf("Digite o valor de y: \n");
scanf("%d", &y);
printf("Digite o valor de p: \n");
scanf("%d", &p);
printf("Digite o valor de z: \n");
scanf("%d", &z);
media = (x + y + z + p) / 4;
printf("A media encontrada foi de = %d", media);
return (0);
}

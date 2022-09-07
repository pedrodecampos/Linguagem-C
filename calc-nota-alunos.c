#include <stdio.h>
#include <stdlib.h>
int main()
{
int media,p1,p2,p3;
double n1, n2 , n3;
printf("Digite o valor da nota 1 : \n");
scanf("%lf", &n1);
printf("Digite o valor da nota 2 : \n");
scanf("%lf", &n2);
printf("Digite o valor da nota 3 \n");
scanf("%lf", &n3);
printf("\nDigite o peso da primeira nota: ");
scanf("%d", &p1);
printf("\nDigite o peso da segunda nota: ");
scanf("%d", &p2);
printf("\nDigite o peso da terceira nota: ");
scanf("%d", &p3);
media = (n1*p1+n2*p2+n3*p3)/(p1+p2+p3);
printf("A media encontrada foi de = %d", media);
return 0;
}

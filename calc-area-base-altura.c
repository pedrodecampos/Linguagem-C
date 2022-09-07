#include <stdio.h>
#include <stdlib.h>
int main()
{
float area, altura, base;
printf("Digite a altura do triangulo: \n");
scanf("%f",&altura);
printf("Digite a base do triangulo: \n");
scanf("%f",&base);
area = (base * altura) / 2;
printf("A Area Do Triangulo e = %f",area);
return 0;
}

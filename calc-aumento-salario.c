#include <stdio.h>
#include <stdlib.h>
int main()
{
float salario, aumento,salarioFinal;
printf("Digite Seu Salario: \n");
scanf("%f",&salario);
printf("Digite O Percentual De Aumento em Porcetagem: \n");
scanf("%f",&aumento);
salarioFinal = salario + (aumento / 100) * salario;
printf("O Salario Com Aumento e de = %.2f",salarioFinal);
return 0;
}

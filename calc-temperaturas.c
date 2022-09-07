#include <stdio.h>
#include <stdlib.h>
int main()
{
double fah, cels,fah1,cels1;
printf("Leia Temperatura Cels: \n");scanf("%lf",&cels);
fah = (cels*1.8) + 32;
printf("Fah e igual a = %.2lf\n",fah);
printf("Agora Vamos Converter Fah em Cels \n");
printf("\n");
printf("\n");
printf("\n");
printf("Leia Temperatura em Fah: \n");
scanf("%lf",&fah1);
cels1 = (fah1 - 32) / 1.8;
printf("Cels e igual a = %.2lf\n",cels1);
return 0;
}

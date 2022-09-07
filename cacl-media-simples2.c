#include <stdio.h>
#include <stdlib.h>
int main()
{
float media,aux,contador,i,soma;
printf("Digite Quantos Numeros ira ser digitados:\n");
scanf("%f",&contador);
soma =0;
for(i=0; i<contador; i++){
    printf("Digite Um Numero:\n");
    scanf("%f",&aux);
    soma = soma + aux;
}
 media = soma /contador;
    printf("Media = %f",media);

return (0);
}

#include <stdio.h>
#include <stdlib.h>
int main()
{
int a,b;
printf("Digite Dois Valores: \n");
scanf("%d%d", &a, &b);
printf("a: %d b: %d\n",a,b);
a = a + b;
b = a - b;
a = a - b;
printf("a: %d b: %d \n", a,b);
return 0;
}

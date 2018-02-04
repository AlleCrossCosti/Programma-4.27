#include <stdio.h>

int main() {
int a, m;

printf("Inserisci un numero: ");
scanf("%d",&a);

m = a % 2;

   if(m == 0)
     {
     if(a > 0)
       printf("NUMERO PARI E POSITIVO");
       else
       printf("NUMERO PARI E NEGATIVO");
       }
       else
       {
       if(a > 0)
        printf("NUMERO DISPARI E POSITIVO");
        else
        printf("NUMERO DISPARI E NEGATIVO");
        }
        return 0;
        
        }

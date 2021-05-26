#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,x=2002;
   while(1){
    scanf("%i", &n);
   if(n==x){
    printf("Acesso Permitido\n");
    break;
   }
   else{
    printf("Senha Invalida\n");
   }
   }
   return 0;
}

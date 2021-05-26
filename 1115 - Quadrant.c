#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,x,n;
   for(i=0; i<100; i++){
    scanf("%i%i", &x, &n);
    if(x<0 && n<0){
        printf("terceiro\n");
    }else if(x>0 && n<0){
        printf("quarto\n");
    }else if(x>0 && n>0){
        printf("primeiro\n");
    }else if(x<0 && n>0){
        printf("segundo\n");
    }
   }
   return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,x,y,temp=0;
   int max, min;
   scanf("%i%i", &x, &y);
   if(x<y){
    max=y;
    min=x;
   }else{
    max=x;
    min=y;
   }
   for(i=(min+1); i< max; ++i){
        if(i%2==1 || i%2==-1 ){
        temp += i;
        }
   }
   printf("%i\n", temp);
   return 0;
}

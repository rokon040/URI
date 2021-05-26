#include <stdio.h>
#include <stdlib.h>

int main()
{
   double n1, total= 0, avg=0;
   int i,totaln=0;
   for(i=1; i<=6; i++){
    scanf("%lf", &n1);
    if(n1>0){
        totaln += 1;
        total += n1;
    }
   }
   avg=total/totaln;

   printf("%i valores positivos\n", totaln);
   printf("%.1lf\n", avg);
   return 0;
}

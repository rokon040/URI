#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i,x,y;
    scanf("%d", &x);
    for(i=1; i<=x; ++i){
        if (i % 2 == 0){
                y=i*i;
            printf("%i^2 = %i\n",i,y);
        }
    }
   return 0;
}

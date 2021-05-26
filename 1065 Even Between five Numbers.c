#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,n,temp=0;
    for( i=1; i<=5; i++){
        scanf("%i", &n);
        if(n<0){
            n= -n;
        }
    if(n % 2 == 0){
        temp++;
    }
    }
     printf("%i valores pares\n", temp);
     return 0;
}

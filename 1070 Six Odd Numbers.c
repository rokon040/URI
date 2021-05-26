#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,odd;
    scanf("%i", &n);
    for (i=n; i<(n+12); i +=2){
        if(i%2==0){
            odd=i+1;
            printf("%d\n", odd);
        }
        else{
        odd = i;
        printf("%d\n", odd);
        }
    }
   return 0;
 }

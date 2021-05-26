#include <stdio.h>
#include <stdlib.h>

int main(){
    int x,ano,mes,mes2,dia;
    scanf("%d", &x);
   ano=x/365;
   mes=x-(ano*365);
   mes2=mes/30;
   dia=mes-(mes2*30);
   printf("%d ano(s)\n",ano);
   printf("%d mes(es)\n",mes2 );
   printf("%d dia(s)\n", dia);
    return 0;
}

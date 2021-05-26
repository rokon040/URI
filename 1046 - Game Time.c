#include <stdio.h>
#include <stdlib.h>

int main(){
    int st,et,du;
    scanf("%d %d", &st, &et);
    du = et - st;

    if (du < 0){
        du = 24 + (et - st);
    }
    if(st==et){
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else
        printf("O JOGO DUROU %d HORA(S)\n",du);
    return 0;
}

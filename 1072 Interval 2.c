#include <stdio.h>
int main(){

    int x, a, i;

    int input = 0;
    int output = 0;

    scanf("%d", &x);
    for(i = 0; i < x; i++)
    {
        scanf("%d", &a);
        if(a >= 10 && a <= 20){
            input++;
        }else{
            output++;
        }

    }
    printf("%d in\n", input);
    printf("%d out\n", output);

    return 0;
}

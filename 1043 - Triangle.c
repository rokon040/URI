#include<stdio.h>
int main(){
    float a, b, c, area, per ;

    scanf("%f %f %f", &a, &b, &c);

    if ((a < (float)(b+c)) && (b < (float)(a+c)) && (c < (float)(b+a))){
        per = a+b+c;
        printf("Perimetro = %.1f\n",per);


    }
    else
    {
        area = ((a + b) * c) / 2;
        printf("Area = %.1f\n",area);
    }
    return 0;
}

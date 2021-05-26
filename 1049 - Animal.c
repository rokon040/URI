#include <stdio.h>
#include <stdlib.h>
int main(){
   char ch1[15],ch2[15],ch3[15];
   scanf("%s %s %s", &ch1,&ch2, &ch3);
    if(ch1[0]=='v'){
        if(ch2[0]=='a'){
            if(ch3[0]=='c')
                printf("aguia\n");
            else
                printf("pomba\n");
        }
        else{
            if (ch3[0]=='o')
                printf("homem\n");
            else
                printf("vaca\n");
        }
    }else{
        if(ch2[0]=='i'){
            if(ch3[2]=='m')
                printf("pulga\n");
                else
                printf("lagarta\n");
        }
        else{
            if (ch3[0]=='h')
            printf("sanguessuga\n");
            else
            printf("minhoca\n");

        }
    }

    return 0;
}

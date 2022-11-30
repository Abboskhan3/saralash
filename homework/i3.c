#include<stdio.h>

int  almash(int *a){

        *a=*a%10*10+*a/10;
        return *a;

}


int main(){ 


        int a;

        printf("2 xonali son kiriting ");scanf("%d",&a);

        printf("%d ",almash(&a));



        return 0;
}

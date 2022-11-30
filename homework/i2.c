#include<stdio.h>

int  kvadrat(int *kvadrat){

        return *kvadrat * *kvadrat;


}


int main(){

        int b;

        printf("Sonni kiriting ");scanf("%d",&b);


        printf("%d ",kvadrat(&b));

        return 0;
}


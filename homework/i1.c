#include<stdio.h>

void adres(int *a){

        printf("%p",a);

}
int main(){

        int a;

        printf("Sonni kiriting ");scanf("%d", &a);

        adres(&a);

        return 0;
}

#include<stdio.h>


void almash(int *a, int *b){

	int c=*a;

	*a=*b;

	*b=c;

	//printf("%d %d",*a,*b);

}


int main(){

	int a, b;

	printf("a= ");scanf("%d",&a);-
	printf("b= ");scanf("%d",&b);

	almash(&a,&b);
	puts("");

	printf("a=%d \n b= %d \n",a,b);


}
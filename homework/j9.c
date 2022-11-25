#include <stdio.h>
#include<stdlib.h>
#include<time.h>

void random_toldir(int b[], int a){

	for(int i=0; i<a; i++){
		b[i]=8+rand()%14;
	}
}

void korsat(int b[], int a){

	for(int i=0; i<a; i++ ){
		printf("%d ",b[i]);
	}
	puts("");
}

void sur(int b[],int a,int k){

	k=k%a;

	for(int i=0; i<a; i++){

		if(i<k){
			printf("%d ",b[a+i-k]);
		}
		else{
			printf("%d ",b[i-k]);
		}

	}
puts("");
}



int main(){
	srand(time(0));
	int a,k;
	printf("Msssiv uzinligini kiriting ");scanf("%d",&a);
	printf("Nechta surmoqchisiz ");scanf("%d",&k);

	int b[a];

	random_toldir(b,a);
	korsat(b,a);
	sur(b,a,k);

	return 0;
}
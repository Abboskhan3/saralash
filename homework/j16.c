#include <stdio.h>
#include <stdlib.h>
#include<time.h>

void random_1(int a[], int b){
	for(int i=0; i<b; i++){
		a[i]=-5+rand()%21;
	}
}

void korsat(int a[], int b){
	for(int i=0; i<b; i++){
		printf("%d " , a[i]);
	}
puts("");
}



void manfiy(int a[],int b){

	int sum=0;

	for(int i=0; i<5; i++){
		if(a[i]<0){
			break;
		}else{
			sum+=a[i];
		}
	}
	printf("%d ", sum);

puts("");

}





int main(){

	srand(time(0));

	int b;

	printf("MAssiv uzunligini kiriting :");scanf("%d",&b);

	int a[b];

	random_1(a, b);

	korsat (a,b);

	manfiy(a,b);




	return 0;
}
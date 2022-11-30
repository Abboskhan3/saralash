#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void aralash(int c[], int s){

	for(int i=0; i<s;i++){
		c[i]=-10+rand()%21;
	}
puts("");
}

void korsat_2(int c[], int s){

	for(int i=0; i<s;i++){
		printf("%d ", c[i]);
	}
puts("");
}

int qosh(int c[], int s){

	int juft;
	int toq;
	int sum=0;

	for(int i=0;i<s; i++){

          if(c[i]>0){
		if(c[i]%2==0){
			juft=i%s;
			break;
		}
	  }
	}
	for(int i=0; i<s; i++){
		if(c[i]%2==1){
			toq=i%s;
		}
	}

	printf("juft element =%d\n toq element= %d", c[juft] ,c[toq]);


	for(int i=juft+1 ;i<toq;i++){
	//	printf("\n%d ",c[i]);

		sum+=c[i];
	}
	puts("");
	return sum;
}

int main(){

	srand(time(0));

	int s;

	printf("Massivning uzunligini kiriting ");scanf("%d",&s);

	int  c[s];

	aralash(c,s);

	korsat_2(c,s);

	printf("sum= %d ",qosh(c,s));
	return 0;
}

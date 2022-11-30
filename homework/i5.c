#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void juft_toq(int a[],int *toq,int  *juft){

	for(int i=0; i<5; i++){
		if(a[i]%2==0){

			*juft=i;
			break;
		}
	}

	for(int i=0; i<5;i++){
		if(a[i]%2==1){
			*toq=i;
			break;
		}
	}
}

int main(){


	srand(time(0));

	int a;

    printf("Massiv uzunligini kiriting"); scanf("%d",&a);

    int b[a];

    for(int i=0; i<a;i++){
        b[i]=rand()%100;
        printf("%d ",b[i]);
    }
    puts("");
	int toq, juft;

	juft_toq(b,&toq,&toq);


	printf("Toq index= %d\n Juft index =%d \n",toq, juft);
	return 0;
}
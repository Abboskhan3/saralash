#include<stdio.h>
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

void min2(int b[] ,int a){

	int bir;

	for(int i=0; i<a; i++){
		for(int j=i+1; j<a; j++){
			if(b[i]>b[j]){
				bir = b[i];
				b[i] = b[j];
				b[j] = bir;
			}
		}
	}

	for(int i=0; i<a; i++){
		printf("%d ",b[i]);
	}





	for(int i=0; i<a; i++){
		if(b[i]<b[i+1]){
			printf("\n ikkinchi kichkina element = %d ", b[i+1]);

			break;
		}
	}
puts("");

}



int main(){
	srand(time(0));

	int a;

	printf("Massiv uzunligini kiriting ");scanf("%d",&a);


	int b[a];

	random_toldir(b,a);
	korsat(b,a);

	min2(b,a);

	return 0;
}
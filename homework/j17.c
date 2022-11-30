#include <stdio.h>
#include<stdlib.h>
#include<time.h>

void aralash(int m[], int n){
	for(int i=0;i<n; i++){
		m[i]=-10+rand()%21;
	}
}

void chiqar(int m[],int n){
	for(int i=0; i<n; i++){
		printf("%d ", m[i]);
	}
}

int oxirgi_manfiy(int m[], int n){

	int min_index;

	int kopaytma=1;
	for(int i=0; i<n;i++){
		if(m[i]<0){
//			printf("\n");
		min_index=i%n;

		}
	}

//	printf("%d\n", min_index);

	if(min_index+1==n){

	return 0;


	}
	for(int i=min_index+1; i<=n-1; i++){
		kopaytma*=m[i];
}

//	printf("%d\n ", kopaytma);

	puts("");
	return kopaytma;
}


int main(){

	srand(time(0));

	int n;

	printf("Massivning uzunligini kiriting :");scanf("%d",&n);

	int m[n];

	aralash(m,n);

	chiqar(m,n);

	printf("\n%d ",oxirgi_manfiy(m,n) );




	return 0;
}
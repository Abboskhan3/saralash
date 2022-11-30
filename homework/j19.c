#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void aralash(int c[], int q){

        for(int i=0; i<q;i++){
                c[i]=-10+rand()%21;
        }
puts("");
}

void korsat_2(int c[], int q){

        for(int i=0; i<q;i++){
                printf("%d ", c[i]);
        }
puts("");
}
void hammasi(int c[], int q){

	int juft=0 ,toq=0, manfiy ,musbat;

	for(int i=0; i<q ;i++){

		if(c[i]>=0){
			musbat ++;
		}else{
			manfiy++;
		}
	}

	for(int i=0; i<q; i++){
		if(c[i]%2==1 || c[i]%2==-1 ){
			toq++;
		}else if(c[i]%2==0){
			juft++;
		}
	}

	printf("Musbat son= %d\n Manfiy son= %d \n", musbat, manfiy);

	printf("Toq son = %d \n Juft son= %d \n",toq, juft);

}


int main(){

        srand(time(0));

        int q;

        printf("Massivning uzunligini kiriting ");scanf("%d",&q);

        int  c[q];

        aralash(c,q);

        korsat_2(c,q);

	hammasi(c,q);

        return 0;
}
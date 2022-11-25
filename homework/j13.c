#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void random_2(int b[], int a){

        for(int i=0; i<a; i++){
                b[i]=-10+rand()%21;
        }

        puts("");
}

void korsat (int b[], int a){

        for(int i=0 ; i<a; i++){
                printf("%d ", b[i]);
        }

        puts("");
}

void max_min(int b[], int a){

        int max=b[0];
        int min=b[0];
        int z=0,min_in, max_in;
        for(int i=1;  i<a; i++){
                if(max<b[i]){
                        max=b[i];
                        max_in=i%a;
                }

        }
                printf("%d ", max);


        for(int i=1; i<a; i++){

                if(min>b[i]){
                        min=b[i];

                        min_in=i%a;
                }

        }

                printf("%d ", min);

        if(max_in <min_in){
                printf("\nMin va Max o'rtasida %d ta son bor ", min_in-max_in-1);
        }else{
                printf("\nMin va Max o'rtasida %d ta son bor ", max_in- min_in-1);
        }

}




int main(){

        srand(time(0));

        int a;

        printf("Massivning uzunligini kiriting ");scanf("%d", &a);

        int b[a];

        random_2(b,a);

        korsat(b,a);

        max_min(b,a);

        return 0;
}






#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void fill_unique(int array[], int b, int min, int max)
{
  
  int new_random;

  bool bir;
  
  for (int i = 0; i < b; i++)
  {

    do
    {

      new_random = (rand() % (max - min + 1)) + min;
      
 
      bir = true;
      for (int j = 0; j < i; j++)
        if (array[j] == new_random) bir = false;
 
    }
    while (!bir);


    array[i] = new_random;
  }
}

int main(void)
{

  srand( time(0) );
  int b;

	printf("Massiv elementlarini kiriting");

  scanf("%d",&b);

  int a[b];


  fill_unique(a, b, 1, 15);


  for (int i = 0; i < b; i++)
    printf("%d ",  a[i]);
  return 0;
}


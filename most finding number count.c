#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 1000000000LL
int main()
{
     int* arr=(int*)malloc(N*4);
     if(arr==NULL)
     {
         printf("Memory allocation failed!Not enough RAM");
         return 1;
     }
     int freq[101]={0};
    srand(time(0));
    printf("Generating 1 billion numbers...\n");



    for(long long i=0;i<N;i++)
    {

         arr[i]=(rand()%100)+1;
    }

    printf("Counting frequencies...\n");

    for(long long i=0;i<N;i++)
    {
        freq[arr[i]]++;
    }
    free(arr);
    int max=freq[1];
    int min=freq[1];
    for( int i=2;i<=100;i++)
    {


    if(freq[i]>max)
    {
        max=freq[i];
    }
      if(freq[i]<min)
    {
        min=freq[i];
    }
    }
     printf("\n--------RESULTS--------");

     printf("The most appeared numbers (%d)\n",max);
     for(int i=1;i<=100;i++)
     {
         if(freq[i]==max)
         {
             printf("%d",i);
         }
     }
     printf("\n");

      printf("The Least appeared numbers (%d)\n",min);
     for(int i=1;i<=100;i++)
     {
         if(freq[i]==min)
         {
             printf("%d",i);
         }
     }
     printf("\n\n----------------------------------\n");






    return 0;
}

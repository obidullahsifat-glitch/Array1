#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 1000000000LL
int main()
{
     int* arr=(int*)malloc(N*4);
     int freq[101]={0};

     if(arr==NULL)
     {
         printf("Memory not allocated");
         return 1;
     }
     srand(time(NULL));
     clock_t start=clock();
     for(long long i=0;i<N;i++)
     {
         int num=(rand()%100)+1;
         freq[num]++;
     }
     long long index=0;
     for(int val=1;val<=100;val++)
     {

        while(freq[val]>0)
     {
         arr[index++]=val;
         freq[val]--;
     }
     }
     clock_t end=clock();
     double total_time=(double)(end-start)/CLOCKS_PER_SEC;

     printf("Total time=%.2lf",total_time);
     printf("Method 2 (Bubble Sort) Time = O(N^2) - Takes several hundred years for 1 Billion data!\n");

     free(arr);






     return 0;

     }

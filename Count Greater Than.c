#include <stdio.h>
int main()
{

  int arr[5];
  int i;
  int count=0;

  for(i=0;i<=4;i++)
  {
      printf("Enter the number for position %d\n",i+1);
      scanf("%d",&arr[i]);

  }
   int x;
   printf("Enter the number\n");
   scanf("%d",&x);



     for(i=0;i<=4;i++)
     {
         if(x<arr[i])
         {
             count++;
         }
     }
     printf("Numbers greater than=%d",count);
return 0;
}

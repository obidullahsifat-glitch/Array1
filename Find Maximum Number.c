#include <stdio.h>
int main()
{

  int arr[5];
  int i;
  for(i=0;i<=4;i++)
  {
      printf("Enter the number for position %d\n",i+1);
      scanf("%d",&arr[i]);

  }

      int max;
      max=arr[0];
      for(i=1;i<=4;i++)
      {
          if(arr[i]>max)
          {
              max=arr[i];
          }
      }

      printf("Maximum Number is=%d",max);



    return 0;
}

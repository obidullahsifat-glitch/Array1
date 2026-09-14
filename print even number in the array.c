#include <stdio.h>
int main()
{
  int arr[6];
  int i,count=0;
  for(i=0;i<=5;i++)
  {
      printf("Enter the value of number %d",i+1);
      scanf("%d",&arr[i]);
  }

     for(i=0;i<=5;i++)
  {
      if(arr[i]%2==0)
      {
          count++;
          printf("%d ",arr[i]);
      }
  }
  printf("\nTotal even number=%d",count);


    return 0;

}

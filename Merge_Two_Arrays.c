#include <stdio.h>
int main()
{
   int arr1[5];
   int arr2[5];
   int arr3[10];
   int i;
   printf("Enter the all element of first array");
   for(i=0;i<=4;i++)
   {
       scanf("%d",&arr1[i]);
   }
    printf("Enter the all element of second array");
   for(i=0;i<=4;i++)
   {
       scanf("%d",&arr2[i]);
   }
   for(i=0;i<=9;i++)
   {
       if(i<=4)
       {
           arr3[i]=arr1[i];
           printf("%d ",arr3[i]);
       }
       if(i>=5)
       {
           arr3[i]=arr2[i-5];
           printf("%d ",arr3[i]);
       }
   }



    return 0;
}

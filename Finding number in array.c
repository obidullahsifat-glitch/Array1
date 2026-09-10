#include <stdio.h>
int main()
{
    int n,i;
    int arr[5];
    int found=0;

     for(i=0;i<=4;i++)
{
   printf("Enter the %d number Element\n",i+1);
   scanf("%d",&arr[i]);

}
    printf("Enter the number that you want to find in the array\n");
    scanf("%d",&n);



     for(i=0;i<=4;i++)
   {
       if(arr[i]==n)
       {
           printf("The Index number is=%d\n",i);
           found=1;


           }

         }

         if(found==0)
            {

        printf("Not Found\n");

       }
return 0;

}

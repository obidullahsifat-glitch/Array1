#include <stdio.h>
int main()
{
int arr[5];
int i,count=0;
for(i=0;i<=4;i++)
{
   printf("Enter the %d number Element\n",i+1);
   scanf("%d",&arr[i]);

}
for(i=0;i<=4;i++)
{

    if(arr[i]%2==0)
    {
        printf("##The Even Number =%d\n",arr[i]);
        count++;
    }
}
printf("\n**The number of even numbers are=%d\n",count);





    return 0;
}

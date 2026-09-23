#include <stdio.h>
int main()
{
int arr[5][3];
int i,j;
printf("Enter the all elements");
for(i=0;i<5;i++)
{
    for(j=0;j<3;j++)
    {
        scanf("%d",&arr[i][j]);
    }
}
   int max=arr[0][0];
   for(i=0;i<5;i++)
{
    for(j=0;j<3;j++)
    {

    if(i==0 && j==0)
    {
        continue;
    }


if(arr[i][j]>max )
        {
            max=arr[i][j];
        }

    }

}
printf("Max=%d",max);




    return 0;
}

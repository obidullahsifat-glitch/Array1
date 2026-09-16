#include <stdio.h>
int main()
{
    int arr[5];
    int count=0;
    int i;
    int sum=0;
    for(i=0;i<=4;i++)
    {
        printf("Enter the number for position %d\n",i+1);
        scanf("%d",&arr[i]);

    }
    for(i=0;i<=4;i++)
    {

        sum=sum+arr[i];
        count++;
    }
    float average=(float)sum/count;
    printf("Average=%.2f",average);







    return 0;
}

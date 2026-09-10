#include <stdio.h>
int main()
{
        int arr[5];


    int i;
    for(i=0;i<=4;i++)
    {
        printf("Enter The %d Number",i+1);
        scanf("%d",&arr[i]);
    }
     int max=arr[0];
     int min=arr[0];
    for(i=1;i<=4;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    printf("So The Maximum Value Of The Array=%d\n",max);




    for(i=1;i<=4;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    printf("So The Minimum Value Of The Array=%d\n",min);





    return 0;
}

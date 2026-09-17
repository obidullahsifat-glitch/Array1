#include <stdio.h>
int main()
{
    int arr[5];

    int i,j,temp;

    for(i=0;i<=4;i++)
    {
        printf("Enter the number for position %d\n",i+1);
        scanf("%d",&arr[i]);

    }

        for(i=0;i<=4;i++)
        {

        for(j=0;j<4;j++)
        {
            if(arr[j]>arr[j+1])
            {
              temp=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=temp;
        }
        }


        }
        printf("Shorted Array Order:\n");

        for(i=0;i<=4;i++)
    {
        printf("%d ",arr[i]);


    }
    printf("\n");




    return 0;
}


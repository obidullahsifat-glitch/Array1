#include <stdio.h>
int main()
{
    int arr1[5],arr2[5],arr3[5];

    int i;

    for(i=0;i<=4;i++)
    {
        printf("Enter the number for position %d of array one\n",i+1);
        scanf("%d",&arr1[i]);

    }

     for(i=0;i<=4;i++)
    {
        printf("Enter the number for position %d of array two\n",i+1);
        scanf("%d",&arr2[i]);

    }

     for(i=0;i<=4;i++)
    {
        arr3[i]=arr1[i]+arr2[i];
        printf("%d ",arr3[i]);

    }
    printf("\n");
    return 0;
}


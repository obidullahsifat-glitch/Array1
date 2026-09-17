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
    int index;
    printf("Enter the index number that you want to delete from array\n");
    scanf("%d",&index);
    for(i=index;i<4;i++)
    {

           arr[i]=arr[i+1];



    }
    printf("Array after deletion:\n");
    for(i=0;i<4;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");



    return 0;

}

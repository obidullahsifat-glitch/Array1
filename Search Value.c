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
    int x;
    printf("Enter the number than you want to search\n");
    scanf("%d",&x);
    int found=0;

     for(i=0;i<=4;i++)
    {
        if(arr[i]==x)
        {
            printf("The index number is=%d",i);
            found=1;
            break;
        }

      }  if(found==0)

           {


           printf("Not Found\n");

        }



    return 0;
}

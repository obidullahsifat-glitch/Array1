#include <stdio.h>
void printarray(int* ptr,int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",*(ptr+i));
    }
    printf("\n");
}
int main()
{

 int arr[4]={10,20,30,40};
 printarray(arr,4);
 return 0;
}

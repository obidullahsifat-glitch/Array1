#include <stdio.h>
int main()
{
  int arr[3]={10,20,30};
  int* ptr=arr;
  for(int i=0;i<=2;i++)
  {

      printf("Value:%d\nAddress:%p \n",*(ptr+i),(ptr+i));
  }



    return 0;
}

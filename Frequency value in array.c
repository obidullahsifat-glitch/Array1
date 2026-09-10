#include <stdio.h>
int main()
{
int n[5];
int count=0;

int i,x;
for(i=0;i<=4;i++)
{

printf("Enter the %d Element\n",i+1);
scanf("%d",&n[i]);


}
printf("Enter the number That you want to check");
scanf("%d",&x);


for(i=0;i<=4;i++)
{

if(n[i]==x)
{
    count++;
}


}
printf("Total number =%d",count);

return 0;

}


#include <stdio.h>
int main()
{
int n[5];

int i;
for(i=0;i<=4;i++)
{

printf("Enter the %d Element\n",i+1);
scanf("%d",&n[i]);


}
for(i=4;i>=0;i--)
{

printf("%d ",n[i]);

}




return 0;
}


#include <stdio.h>
int main()
{
int n[5];
int i;
for(i=0;i<=4;i++)
{

printf("Enter the %dth Element\n",i+1);
scanf("%d",&n[i]);


}
for(i=0;i<=4;i++)
{

printf("%d\n",n[i]);

}




return 0;
}

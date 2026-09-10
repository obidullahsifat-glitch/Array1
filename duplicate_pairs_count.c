#include <stdio.h>
int main()
{
int n[5];
int count=0;

int i,j;
for(i=0;i<=4;i++)
{

printf("Enter the %d Element\n",i+1);
scanf("%d",&n[i]);


}
for(i=0;i<=4;i++)
{

for(j=i+1;j<=4;j++)
{
    if(n[i]==n[j])
    {
        count++;
    }
}

}

printf("Total duplicate pairs=%d",count);




return 0;
}



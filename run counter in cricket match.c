#include <stdio.h>
int main()
{
    int runs[]={4,6,0,4,6,6};
    int freq[7]={0};
    for(int i=0;i<6;i++)
    {
        int ball=runs[i];
        freq[ball]++;
    }
    printf("0 (Dot ball) came: %d times\n", freq[0]);
    printf("4 (Boundary) came: %d times\n", freq[4]);
    printf("6 (Sixer) came: %d times\n", freq[6]);



    return 0;
}

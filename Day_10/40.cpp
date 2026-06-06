#include <stdio.h>
int main()
{
    int l,j,i,a=1,k;
    for(i=1;i<=5;i++)
    {
        printf("\n");
        for(k=5-i;k>=1;k--)
        {
            printf(" ");
        }
        for(l=1;l<=i;l++)
        {
            printf("%c",l+'A'-1);
        }
        for(j=i-1;j>=1;j--)
        {
            printf("%c",j+'A'-1);
        }
    }
 
    return 0;
}
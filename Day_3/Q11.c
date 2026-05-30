#include <stdio.h>

int main() {
    // Write C code here
    int p,q,i,a,b;
    printf("input a number");
    scanf("%d %d",&p,&q);
    if(p>q)
    {
      a=q;
    }
    else 
    {
      a=p;  
    }
    for(i=1;i<=a;i++)
    {
        if(p%i==0 && q%i==0)
        {
             b=i;
        }
        
    }
    printf("%d ", b);
    
    

    return 0;
}
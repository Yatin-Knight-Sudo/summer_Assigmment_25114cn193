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
    for(i=a;i<=p*q;i++)
    {
        if(i%p==0 && i%q==0)
        {
             b=i;break;
        }
        
    }
    printf("lcm of both =%d ", b);
    
    

    return 0;
}
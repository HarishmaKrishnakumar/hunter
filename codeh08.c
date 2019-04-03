#include <stdio.h>

int main()
{
 int N,a[1000],i,j,k;
 scanf("%d",&N);
 for(i=0;i<N;i++)
 {
     scanf("%d",&a[i]);
 }
 
 for(i=0;i<N;i++)
 {
     for(j=i+1;j<=N;j++)
     {
         for(k=j+1;k<=N;k++)
         {
             if(a[i]<a[j] && a[j]<a[k])
             {
             if(a[i]+a[j]==a[k])
            {
                
                printf("%d %d %d\n",a[i],a[j],a[k]);
            }
             }
             
         }
     }
 }
    return 0;
}

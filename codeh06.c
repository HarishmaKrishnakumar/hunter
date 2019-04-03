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
     for(j=i+1;j<N;j++)
     {
         if(a[i]==a[j])
         {
             printf("%d",a[i]);
             k=1;
             i=N;
         }
     }
 }
 if(k==0)
 {
     printf("unique");
 }
 
    return 0;
}

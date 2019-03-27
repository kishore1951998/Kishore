#include <stdio.h>
int main()
{
  int a[50],b[50],c[50],d[50],i,j,k=0,n,l=0,l1=0,g=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
   for(i=0;i<n;i++)
  {
      if(a[i]%2==0)
         {
      l++;
         }
         
       for(j=i+1;j<n;j++)
     {
         if(a[j]%2==0)
         {
      l1++;
         }
        
         else
         {
         break;    
         }
     }
    
  }
  for(i=0;i<n;i++)
  {
  b[k]=l;
         k++;
  }
  for(j=i+1;j<n;j++)
     {
  c[g]=l1;
         g++;
     }
  printf("%d\n%d",k,g);
      
    return 0;
}

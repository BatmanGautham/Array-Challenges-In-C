#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    
    int n;
    scanf("%d",&n);
    int a[n],i,j;
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    
    int count=0,flag=0;
    for(i=0;i<n;i++)
    {
     count=0;
     for(j=i+1;j<n;j++)
     {
         if(a[i]==a[j])
         {
             count++;
         }
     }
      if(count >= n/2)
         {
             flag=1;
             printf("The majority element is : %d",a[i]);
             return 0;
         }
    }
    
    if(flag == 0)
    {
        printf("No majority element found in the array");
    }
    
    
    return 0;
}

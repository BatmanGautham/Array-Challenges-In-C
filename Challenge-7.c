#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    
    scanf("%d",&n);
    
    int i,a[n];
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    int b[n];
    
    b[0] = a[0]*a[1];
    for(i=1;i<n-1;i++)
    {
        b[i] = a[i-1]*a[i+1];
    }
    b[n-1] = a[n-2]*a[n-1];
    
    for(i=0;i<n;i++)
    printf("%d ",b[i]);
}

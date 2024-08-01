#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d", &n); 
    int a[n],sum=0,i; 
    
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    
    int b[n],diff=0;
    
    for(i=0;i<n;i++)
    {
        diff += a[i];
        b[i] = sum - diff;
    }
    
    for(i=0;i<n;i++)
        printf("%d ",b[i]);

    return 0;
}

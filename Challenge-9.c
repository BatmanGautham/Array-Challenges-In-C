#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{    
    int n;
    scanf("%d", &n); 
    int a[n],sum=0,i; 
    
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    
    int b[n];
    
    for (i = 0; i < n; i++) 
    {
        b[i] = sum-a[i];
    }
    
    for (i = 0; i < n; i++) 
        printf("%d ",b[i]);
    
    return 0;
}

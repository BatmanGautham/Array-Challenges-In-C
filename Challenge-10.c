#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d", &n); 
    int a[n],i,oc=0,zc=0; 
    
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
        if(a[i] == 0)
        {
            zc++;
        }
        if(a[i] == 1)
        {
            oc++;
        }
    }
    
    printf("zc = %d",zc);
    printf("\noc = %d",oc);
    return 0;
}

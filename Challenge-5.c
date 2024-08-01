#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);  
    int a[n];  
    
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }
    
    int sum =0,temp;
    
    for (int i = 0; i < n; i++) 
    {
        temp = a[i];
        a[i] = sum;
        sum += temp;
    }
    
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", a[i]);
    }
    
    
    return 0;
}

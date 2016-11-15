#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, *a, k=0, i;
    printf("Please, enter number of elements in your array: ");
    scanf("%d", &n);
    a=(int*)malloc(sizeof(int)*n);
    printf("Now, enter elements: ");
    for(i=0; i<n; ++i)
    {
        scanf("%d", &a[i]);
        if(a[i]==0)
            ++k;
    }

    printf("Calculating...\nI found out there's %d zero-element(s) in your array.", k);

    return 0;
}

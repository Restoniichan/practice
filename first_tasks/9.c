#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, k, *a;
    printf("Please, enter your favorite number: ");
    scanf("%d", &n);

    a=(int*)malloc(sizeof(int)*n+1);
    for(i=0; i<=n; ++i)
        a[i]=1;

    printf("I've got something for you!\nThere's list of prime numbers not exceeding %d:\n", n);
    for(i=2; i<=n; ++i)
    {
        if(a[i])
            printf("%d ", i);
        for(k=i*2; k<=n; k+=i)
            a[k]=0;
    }

    return 0;
}

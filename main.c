#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int *a, int n)
{
    int i, j;
    for(i=n; i>0; --i)
        for(j=n-1; j>n-i; --j)
            if(a[j-1]>a[j])
            {
                int cur=a[j-1];
                a[j-1]=a[j];
                a[j]=cur;
            }
}

void insert_sort(int *a, int n)
{
    int i, j, cur;
    for(i=1; i<n; ++i)
        for(j=i; j>0 && a[j]<a[j-1]; --j)
        {
            cur=a[j];
            a[j]=a[j-1];
            a[j-1]=cur;
        }
}

void quick_sort(int *a, int n)
{
    int left, right, p, cur;
    if(n<2)
        return;
    p=a[n/2];
    for (left=0, right=n-1;; ++left, --right)
    {
        while(a[left]<p)
            ++left;
        while(p<a[right])
            --right;
        if(left>=right)
            break;
        cur=a[left];
        a[left]=a[right];
        a[right]=cur;
    }
    quick_sort(a, left);
    quick_sort(a+left, n-left);
}

int main()
{
    int n, i, s_method;
    int *a;

    printf("Size of array: ");
    scanf("%d", &n);
    a=(int*)malloc(sizeof(int)*n);

    printf("Enter elements: ");
    for(i=0; i<n; ++i)
        scanf("%d", &a[i]);

    printf("Sort method (1. Bubble, 2. Insert, 3. Quick): ");
    scanf("%d", &s_method);
    switch(s_method)
    {
    case 1:
        printf("Bubble choosed.\n");
        bubble_sort(a, n);
        break;
    case 2:
        printf("Insert choosed.\n");
        insert_sort(a, n);
        break;
    case 3:
        printf("Quick choosed.\n");
        quick_sort(a, n);
        break;
    default:
        printf("Incorrect input. Default choosed (Quick).\n");
        quick_sort(a, n);
    }

    printf("Sorted array: ");
    for(i=0; i<n; ++i)
        printf("%d ", a[i]);

    free(a);
    return 0;
}

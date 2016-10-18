#include <stdio.h>
#include <stdlib.h>

void swap(char **x, char **y)
{
    char *cur=*x;
    *x=*y;
    *y=cur;
}

int comparator(char *a, char *b)
{
    int i=0;
    while((a[i]!='\0')&&(b[i]!='\0'))
    {
        if(a[i]>b[i])
            return 1;
        if(a[i]<b[i])
            return 0;
        ++i;
    }
    if(a[i]=='\0')
        return 1;
    return 0;
}

void bubble_sort(char **a, int n)
{
    int i, j;
    for(i=n; i>0; --i)
        for(j=n-1; j>n-i; --j)
            if(a[j-1]>a[j])
                swap(&a[j], &a[j-1]);
}

void insert_sort(int *a, int n)
{
    int i, j;
    for(i=1; i<n; ++i)
        for(j=i; j>0 && a[j]<a[j-1]; --j)
            swap(a+j, a+j-1);
}

void quick_sort(int *a, int n)
{
    if(n<2)
        return;

    int left, right, p;
    p=a[n/2];

    for (left=0, right=n-1;; ++left, --right)
    {
        while(a[left]<p)
            ++left;
        while(p<a[right])
            --right;
        if(left>=right)
            break;
        swap(a+left,a+right);
    }

    quick_sort(a, left);
    quick_sort(a+left, n-left);
}

int main()
{
    int n, i, j, s_method, cur, *str_len;
    char **a;
    FILE *inp = fopen("input.txt", "r");
    fscanf(inp, "%d\n", &n);

    str_len=(int*)malloc(sizeof(int)*n);
	for (i=0; i<n; ++i)
		str_len[i] = 0;
	i=0;
	do
    {
		cur=fgetc(inp);
		if ((cur!='\n')&&(cur!=EOF))
			++str_len[i];
		else
			++i;
	} while(cur!=EOF);

	a=(char**)malloc(sizeof(char*)*i);
	rewind(inp);
	fscanf(inp, "%d\n", &n);

	for(j=0; j<i; ++j)
	{
		a[j]=(char*)malloc(++str_len[j]);
		int k=0;
		cur=fgetc(inp);
		while((cur!='\n')&&(cur!=EOF))
			a[j][k++] = cur;
		a[j][k] = '\0';
	}
	fclose(inp);

    printf("Please, choose sort method (1. Bubble, 2. Insert, 3. Quick): ");
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


    free(a);
    return 0;
}

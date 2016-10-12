#include <stdio.h>

int mod(int a, int b)
{
    a=a<0?(-1)*a:a;
    b=b<0?(-1)*b:b;
    int c=0;
    while(a>0)
    {
        a-=b;
        ++c;
    }
    return --c;
}

int main()
{
    //¹4
    int a, b = 1, c = 0;
    printf("Enter a and b: ");
    scanf("%d%d", &a, &b);
    while(b==0)
    {
        printf("Incorrect Input! Please, re-enter: ");
        scanf("%d%d", &a, &b);
    }

    if(a==0)
    {
        printf("a mod b = 0");
        return 0;
    }

    if(a<0 && b>0 || a>0 && b<0)
    {
        printf("a mod b = %d", (-1)*mod(a,b));

    }
    else
        printf("a mod b = %d", mod(a,b));

    return 0;
}

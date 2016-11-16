#include <stdio.h>

int quot(int a, int b)
{
    if(a<0)
        a*=-1;
    if(b<0)
        b*=-1;
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
    //4. Euclidean division
    int a, b, c = 0;
    printf("Please, enter integer A and B: ");
    scanf("%d%d", &a, &b);
    while(b==0)
    {
        printf("Incorrect Input! B = 0. Please, re-enter: ");
        scanf("%d%d", &a, &b);
    }

    if(a==0)
    {
        printf("Quotient of A divided by B is 0");
        return 0;
    }

    if(a<0 && b>0
       || a>0 && b<0)
    {
        printf("Quotient of A divided by B is %d", (-1)*quot(a,b));

    }
    else
        printf("Quotient of A divided by B is %d", quot(a,b));

    return 0;
}

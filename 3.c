#include <stdio.h>

int main()
{
    //�3
    int a, b;
    scanf("%d%d", &a, &b);
    printf("a: %d b: %d\n", a, b);
    a+=b;
    b=a-b;
    a-=b;
    printf("a: %d b: %d", a, b);

    return 0;
}

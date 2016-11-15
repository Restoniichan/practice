#include <stdio.h>

int main()
{
    int cnt[28], i, a, b, c, k=0;
    for(i=0; i<28; ++i)
        cnt[i]=0;

    for(a=0; a<10; ++a)
        for(b=0; b<10; ++b)
            for(c=0; c<10; ++c)
                ++cnt[a+b+c];

    for(i=0; i<28; ++i)
        k+=cnt[i]*cnt[i];

    printf("You know, number of \"lucky\" tickets in all 6-digit numbers is %d", k);

    return 0;
}

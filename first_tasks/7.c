#include <stdio.h>
#include <string.h>

int main()
{
    int k=0, i;
    char c[256];
    printf("Please, enter your string: ");
    scanf("%s", c);

    for(i=0; i<strlen(c); ++i)
    {
        if(c[i]=='(')
            ++k;
        if(c[i]==')')
            --k;
        if(k<0)
        {
            printf("Sorry, but bracket balance is broken!");
            return 0;
        }
    }

    k==0? printf("Gratz! It's all right:)"): printf("Sorry, but bracket balance is broken!");

    return 0;
}

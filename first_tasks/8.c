#include <stdio.h>
#include <string.h>

int main()
{
    int k=0;
    char s[256], s1[256], *p;
    printf("Please enter S and S1: ");
    scanf("%s %s", s, s1);

    p=strstr(s, s1);
    while(p!=NULL)
    {
        ++k;
        p=strstr(p+strlen(s1), s1);
    }

    printf("Calculating...\nIt's %d entrance(s) of S1 in S.", k);

    return 0;
}

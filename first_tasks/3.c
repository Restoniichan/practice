#include <stdio.h>

int main()
{
    //3. Swapping value of two variables w/o using third one.
    int a, b;
    printf("Please, enter A and B numbers: ");
    scanf("%d %d", &a, &b);
    printf("Here's your numbers:\n"
           "A: %d B: %d\n", a, b);
    a+=b;
    b=a-b;
    a-=b;
    printf("And now I swapped them:\n"
           "A: %d B: %d", a, b);

    return 0;
}

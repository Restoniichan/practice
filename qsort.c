#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int a[argc-2], i;
	for(i=0; i < argc-2; ++i)
		a[i] = atoi(argv[i+2]);

	for (i = 0; i < argc-2; ++i)
		printf("%d\n", a[i]);

	
}

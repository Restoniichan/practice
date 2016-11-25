#include <stdio.h>
#include <stdlib.h>

void qsort(int *a, int lo, int hi) {
int p;
if(lo < hi) {
    p = part(a, lo, hi);
    qsort(a, lo, p);
    qsort(a, p + 1, hi);
}
}

int part(int *a, int lo, int hi) {
int pivot = a[lo];
int i = lo - 1;
int j = hi + 1;
    do:
        i := i + 1
    while A[i] < pivot do

    do:
        j := j - 1
    while A[j] > pivot do

    if i >= j then
        return j

    swap A[i] with A[j]
}

int main(int argc, char **argv)
{
int a[argc-2], i;
for(i=0; i < argc-2; ++i)
	a[i] = atoi(argv[i+2]);

for (i = 0; i < argc-2; ++i)
	printf("%d\n", a[i]);


}

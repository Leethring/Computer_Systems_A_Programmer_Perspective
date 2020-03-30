#include <stdio.h>

int uadd_ok(unsigned x, unsigned y);

int main()
{
    unsigned a, b;
    scanf("%u %u ", &a, &b);
    printf(" %d ", uadd_ok(a, b));

    return 0;
}

int uadd_ok(unsigned x, unsigned y)
{
    unsigned total;
    int added = 0;
    total = x + y;

    if (total < x || total < y)
        added = 1;
    return added;
}

#include <stdio.h>

typedef unsigned char * byte_pointer;

void show_bytes(byte_pointer start, size_t len) 
{
    size_t i;
    for (i = 0; i < len; i++)
        printf("%.2x", start[i]);
    printf("\n");
}

void show_int(int x)
{
    show_bytes((byte_pointer) &x, sizeof(int));
    
}

void show_float(float x)
{
    show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void * x)
{
    show_bytes((byte_pointer) &x, sizeof(void *));
}

void test_show_bytes(int val)
{
    int ival = val;
    float fval = ival;
    int * pval = &ival;
    show_int(val);
    show_float(fval);
    show_pointer(pval);
}

int fun1(unsigned word)
{
    return (int) ((word << 24) >> 24);
}

int fun2(unsigned word)
{
    return ((int) word << 24) >> 24;
}
int  main(void)
{
    unsigned a;

    while(scanf("%x", &a) == 1)
    {
        printf("fun1 %x\n", fun1(a));
        printf("fun2 %x\n", fun2(a));
    }
    
    return 0;
}

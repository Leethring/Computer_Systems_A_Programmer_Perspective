#include <stdio.h>
#include <string.h>

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
int  main(void)
{
    int x = 0;
    float y = 0;
    int * z = 0;
    int a = 2;
    const char * s = "abcdef";


    show_bytes((byte_pointer) s, strlen(s));
    test_show_bytes(a);
    show_int(x);
    show_pointer(z);
    show_float(y);

    return 0;
}

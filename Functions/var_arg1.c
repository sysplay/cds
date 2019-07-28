#include<stdio.h>
#include<stdarg.h>

int ripple(int n, ...)
{
        int i, j;
        int k;
        va_list p;
        k = 0;
        j = 1;
        va_start(p, n);
        for(; j<n; ++j)
        {
                i = va_arg(p, int);
                for(;i; i&=i-1)
                        k++;
        }
        return k;
}

int main()
{
	int num;
	
	num = ripple(3, 5, 7);
	printf("\n%d\n", num);
	
	return 0;
}


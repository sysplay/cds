#include<stdio.h>
#include<stdarg.h>

double calc_mean(int num, ...)
{
	va_list ap;
	double val;
	int i;

	va_start(ap, num);
	val = 0;
	
	for(i = 0; i < num; i++)
		val += va_arg(ap, double);

	va_end(ap);
	return (val/num);
}

int main()
{
	double d;

	d = calc_mean(4, 1.5, 2.5, 3.5, 1);
	printf("\nThe Average1 is : %lf\n", d);

	d = calc_mean(4, 1.5, 2.5, 3.5, 1.0);	
	printf("\nThe Average2 is : %lf\n", d);

	return 0;
}

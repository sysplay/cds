#include "defs.h"

int i = 1;

main()
{
	auto int i, j;
	i = reset();

	for (j=1; j <= 3; j++ )   {
		PRINT2(d,i,j);
	       	PRINT1(d,next(i));
		PRINT1(d,last(i));
		PRINT1(d,new(i+j));
	}
}

int reset()
{
	return i;
}

int next(int j)
{
	return (j = i++);
}

int last(int j)
{
	static int i = 10;
	return (j=i--);
}

int new(i)
{
	auto int j = 10;

	return (i = j+= i);
}

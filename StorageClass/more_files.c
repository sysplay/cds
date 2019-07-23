#include"defs.h"

int i = 1;

int main()
{
	auto int i, j;

	i = reset();

	for (j = 1; j <= 3; j++)
	{
		PRINT2(d,i,j);
	       	PRINT1(d,next(i));
		PRINT1(d,last(i));
		PRINT1(d,new(i+j));
	}
}




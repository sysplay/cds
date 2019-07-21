#include<stdio.h>

#define print(int) printf("int = %d\n", int) 


int main()
{
	int x = 1, y =1, z=1;

	x += y += z;

	print(x < y ? y : x);

	print(x < y ? x ++ : y ++);

	print(x);
	print(y);

	print(z += x < y ? x ++ : y++);
	print(y);
	print(z);


	x = 3; y = z = 4;

	print( (z >= y >= x) ? 1 : 0);

	print( z >= y && y >= x);
}



